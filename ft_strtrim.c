/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 06:35:55 by khafni            #+#    #+#             */
/*   Updated: 2019/10/25 19:34:40 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	k;

	k = 0;
	str = (char	*)s1;
	i = 0;
	if (s1 == NULL)
		return (NULL);
	j = ft_strlen(s1);
	while (i <= j && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j && ft_strrchr(set, s1[j]) != NULL)
	{
		j--;
		k++;
	}
	if (!ft_substr(str, i, ft_strlen(s1) - (i + k) + 1))
		return (ft_onealc());
	else
		return (ft_substr(str, i, ft_strlen(s1) - (i + k) + 1));
}
