/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 13:13:49 by khafni            #+#    #+#             */
/*   Updated: 2019/10/30 01:11:30 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	const char		*s;
	char			*d;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
