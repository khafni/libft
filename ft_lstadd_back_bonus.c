/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 06:29:36 by khafni            #+#    #+#             */
/*   Updated: 2019/11/01 06:38:35 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		*alst = ft_lstlast(*alst);
		if (*alst == NULL)
		{
			*alst = new;
			return ;
		}
		(*alst)->next = new;
	}
}
