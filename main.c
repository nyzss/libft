/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

void	check_is(void)
{
	char	lowcase_letter;
	char	number;
	char	non_print;

	int	outside_ascii;

	lowcase_letter = 'a';
	number = '5';
	non_print = '\n';
	outside_ascii = 155;
	printf("\n  ------------------------------\n");
	printf("\nChecking the is_xxx functions (if prefixed by 'd' it means that it is in ascii number):\n\n");

	printf("ft_isalpha: %c | %c -> %d | %d\n", lowcase_letter, number, ft_isalpha(lowcase_letter), ft_isalpha(number));
	printf("  ------------\n");
	printf("ft_isdigit: %c | %c -> %d | %d\n", number, lowcase_letter, ft_isdigit(number), ft_isdigit(lowcase_letter));
	printf("  ------------\n");
	printf("ft_isprint: %c | d:%d -> %d | %d\n", lowcase_letter, non_print, ft_isprint(lowcase_letter), ft_isprint(non_print));
	printf("  ------------\n");
	printf("ft_isalnum: %c | d:%d -> %d | %d\n", number, non_print, ft_isalnum(number), ft_isalnum(non_print));
	printf("  ------------\n");
	printf("ft_isascii: %c | d:%d -> %d | %d\n", lowcase_letter, outside_ascii, ft_isascii(lowcase_letter), ft_isascii(outside_ascii));

	printf("\n  ------------------------------\n");
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	// IS functions
	check_is();
}