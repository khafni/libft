/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:19:00 by khafni            #+#    #+#             */
/*   Updated: 2019/11/01 06:40:12 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	if (!(node = malloc(sizeof(t_list *))))
		return (NULL);
	if (!content)
		node->content = NULL;
	node->content = content;
	node->next = NULL;
	return (node);
}
