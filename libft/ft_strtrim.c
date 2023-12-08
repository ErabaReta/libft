/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:37:58 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/09 22:44:41 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	counter(char *s1, char *set)
{
	size_t	i;
	int		count;
	int		set_count;

	i = 0;
	while (is_set(s1[i], set))
		i++;
	count = 0;
	set_count = 0;
	while (s1[i] != '\0')
	{
		if (is_set(s1[i], set))
			set_count++;
		if (!is_set(s1[i], set))
			set_count = 0;
		i++;
		count++;
	}
	return (count - set_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = counter((char *)s1, (char *)set);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (is_set((char)s1[i], (char *)set))
		i++;
	j = 0;
	while (j < len)
	{
		ptr[j] = s1[i + j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
