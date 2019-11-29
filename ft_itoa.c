/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 21:07:33 by khafni            #+#    #+#             */
/*   Updated: 2019/10/27 21:53:48 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		m;
	char	*str;
	long	nb;

	nb = n;
	m = digitlen(n);
	if (!(str = (char *)malloc(m + 1)))
		return (NULL);
	if (nb == 0)
	{
		str[0] = 0 + '0';
	}
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb != 0)
	{
		str[m - 1] = nb % 10 + '0';
		nb /= 10;
		m--;
	}
	str[digitlen(n)] = '\0';
	return (str);
}
