/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:11:00 by okoca             #+#    #+#             */
/*   Updated: 2024/05/24 15:04:39 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_args(int *args, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		ft_putnbr_fd(args[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
}

void	putn(unsigned long num, char *base, int *count)
{
	unsigned int	base_size;

	base_size = ft_strlen(base);
	if (num > (base_size - 1))
		putn(num / base_size, base, count);
	ft_putchar_fd(base[num % base_size], 1);
	*count = *count + 1;
}

int	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		count;

	count = 0;
	num = nbr;
	if (num < 0)
	{
		num *= -1;
		count++;
		ft_putchar_fd('-', 1);
	}
	putn(num, base, &count);
	return (count);
}
