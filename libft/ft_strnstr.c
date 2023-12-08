/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:34:15 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/16 19:33:21 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(char *haystack, char *needle, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (haystack[i + j] != '\0' && needle[j] != '\0' && (i + j) < len)
	{
		if (haystack[i + j] != needle[j])
			break ;
		j++;
	}
	return (j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;
	size_t	count;

	if (len == 0 && (haystack == NULL || ft_strlen(haystack) == 0))
	{
		if (ft_strlen(needle) == 0 && haystack != NULL)
			return ((char *)haystack);
		return (NULL);
	}
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			count = counter((char *)haystack, (char *)needle, i, len);
			if (count == needle_len)
				return ((char *)&haystack[i]);
		}
	}
	return (NULL);
}
