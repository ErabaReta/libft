/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:08 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/12 18:08:41 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_node;

	while (lst != NULL && f != NULL)
	{
		tmp_node = lst->next;
		f(lst->content);
		lst = tmp_node;
	}
}
