/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 23:12:21 by khafni            #+#    #+#             */
/*   Updated: 2019/10/31 02:11:57 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *pt;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	pt = malloc(count * size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, size * count);
	return (pt);
}
