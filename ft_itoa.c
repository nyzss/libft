/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/19 19:33:13 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long *n, int *negative)
{
	int		count;
	long	nbr;

	nbr = *n;
	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		*negative = 1;
		nbr *= -1;
		count++;
		*n = nbr;
	}
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
	negative = 0;
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
	new[n_digit] = '\0';
	return (new);
}

/*
#include <stdio.h>
int main()
{
	char	*i1 = ft_itoa(-623);
	char	*i2 = ft_itoa(156);
	char	*i3 = ft_itoa(-0);

	printf("1: %s\n", i1);
	printf("2: %s\n", i2);
	printf("3: %s\n", i3);
}
*/
