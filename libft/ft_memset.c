/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:14:18 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/06 11:48:14 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp_str;

	tmp_str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		tmp_str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
