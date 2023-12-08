/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:41:50 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/11 11:40:45 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits_counter(long n)
{
	int	count;

	if (n < 0)
		n *= -1;
	if (n == 0)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	array_filler(char *str, int is_negative, long nbr, int len)
{
	while (nbr)
	{
	str[--len + is_negative] = (nbr % 10) + 48;
	nbr /= 10;
	}
	if (is_negative == 1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		is_negative;
	long	nbr;

	nbr = n;
	is_negative = 0;
	len = digits_counter(nbr);
	if (nbr < 0)
	{
		nbr *= -1;
		is_negative = 1;
	}
	str = (char *)malloc((len + is_negative + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len + is_negative] = '\0';
	if (nbr == 0)
		str[0] = '0';
	array_filler(str, is_negative, nbr, len);
	return (str);
}
