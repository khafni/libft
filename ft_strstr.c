/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 02:36:50 by khafni            #+#    #+#             */
/*   Updated: 2019/10/30 02:38:47 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	m;
	char	*pt;

	pt = (char *)haystack;
	i = 0;
	j = 0;
	n = ft_strlen(haystack);
	m = ft_strlen(needle);
	while (i <= (n - m))
	{
		j = 0;
		while (j < m)
		{
			if (needle[j] != haystack[i + j])
				break ;
			j++;
		}
		if (j == m)
			return (pt + i);
		i++;
	}
	return (NULL);
}
