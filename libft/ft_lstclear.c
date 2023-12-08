/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:15:39 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/16 10:41:24 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_node;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp_node;
	}
}
