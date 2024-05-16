/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long *n, int *negative)
{
	int		count;
	long	nbr;

	nbr = *n;
	count = 0;
	if (nbr < 0)
	{
		*negative = 1;
		nbr *= -1;
		count++;
		*n = nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		n_digit;
	char	*new;
	int		negative;
	long	nbr;

	i = 0;
	nbr = n;
	n_digit = count_digits(&nbr, &negative);
	new = (char *)malloc(sizeof(char) * (n_digit + 1));
	if (!new)
		return (NULL);
	while (i < n_digit)
	{
		new[n_digit - i - 1] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	if (negative == 1)
		new[0] = '-';
	return (new);
}
