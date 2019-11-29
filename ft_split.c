/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 02:49:28 by khafni            #+#    #+#             */
/*   Updated: 2019/10/28 02:41:57 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		wcounter(char const *s, char c)
{
	int		j;
	char	*str;

	j = 0;
	str = (char *)s;
	while (*str)
	{
		while (*str && *str == c)
		{
			str++;
		}
		if (*str && *str != c)
		{
			j++;
			while (*str && *str != c)
			{
				str++;
			}
		}
	}
	return (j);
}

static char			*allocater(char delimiter, char *str)
{
	size_t	i;
	char	*column;

	i = 0;
	while (str[i] && str[i] != delimiter)
		i++;
	column = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != delimiter)
	{
		column[i] = str[i];
		i++;
	}
	column[i] = '\0';
	return (column);
}

static char			**freeall(char **row, size_t l)
{
	size_t i;

	i = 0;
	while (l)
	{
		free(row[l]);
		l--;
	}
	free(row);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	size_t	i;
	char	**row;
	char	*str;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	i = 0;
	if (!(row = (char **)malloc(sizeof(char *) * (wcounter(s, c) + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (!*str)
			break ;
		if (!(row[i++] = allocater(c, str)))
			return (freeall(row, wcounter(s, c)));
		while (*str && *str != c)
			str++;
	}
	row[i] = NULL;
	return (row);
}
