/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:31:29 by khafni            #+#    #+#             */
/*   Updated: 2019/10/24 23:23:04 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	n;
	size_t	i;

	str = (char *)s;
	n = ft_strlen(s);
	i = 0;
	while (n-- > 0)
	{
		if (str[n] == (unsigned char)c)
			return (str + n);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (str + i);
	return (NULL);
}
