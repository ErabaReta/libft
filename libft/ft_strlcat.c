/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:56:43 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/14 12:29:40 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	returner(size_t src_len, size_t dst_len, size_t dstsize)
{
	if (dst_len < dstsize)
		return (src_len + dst_len);
	return (src_len + dstsize);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	if (dstsize == 0 && (dst == NULL || src_len == 0))
		return (0);
	dst_len = ft_strlen(dst);
	if (src_len == 0 || dstsize == 0 || dst_len > dstsize)
	{
		return (returner(src_len, dst_len, dstsize));
	}
	j = 0;
	while ((dst_len + j) < (dstsize - 1) && src[j] != '\0')
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (returner(src_len, dst_len, dstsize));
}
