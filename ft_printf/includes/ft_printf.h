/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:41 by okoca             #+#    #+#             */
/*   Updated: 2024/05/30 20:32:08 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

//attribute pour avoir les memes erreur et le format du vrai printf
int		ft_printf(const char *str, ...)
		__attribute__ ((format (printf, 1, 2)));

int		handle_flags(va_list args, char c);

void	print_args(int *args, size_t count);

int		ft_putnbr_base(int nbr, char *base);

void	putn(unsigned long num, char *base, int *count);

int		c_flag(va_list args);

int		s_flag(va_list args);

int		p_flag(va_list args);

int		d_flag(va_list args);

int		u_flag(va_list args);

int		x_flag(va_list args);

int		big_x_flag(va_list args);

int		percent_flag(void);

#endif
