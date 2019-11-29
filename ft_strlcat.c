/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:28:45 by khafni            #+#    #+#             */
/*   Updated: 2019/10/31 02:32:18 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d;
	size_t s;
	size_t i;
	size_t d_init;

	i = 0;
	if (!dst && !size)
		return (ft_strlen(src));
	d = (ft_strlen(dst));
	d_init = ft_strlen(dst);
	s = (ft_strlen(src));
	if (d >= size)
		return (size + s);
	while (src[i] != '\0' && d < size - 1)
		dst[d++] = src[i++];
	dst[d] = '\0';
	return (d_init + s);
}
