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

#include <string.h>

#include <stdio.h>

void	check_is(void)
{
	char	lowcase_letter;
	char	number;
	char	non_print;
	int		outside_ascii;

	lowcase_letter = 'a';
	number = '5';
	non_print = '\n';
	outside_ascii = 155;
	printf("\n  ------------------------------\n");
	printf("\nChecking the is_xxx functions (if prefixed by 'd' it means that it is in ascii number):\n\n");
	printf("ft_isalpha: %c | %c -> %d | %d\n", lowcase_letter, number,
		ft_isalpha(lowcase_letter), ft_isalpha(number));
	printf("  ------------\n");
	printf("ft_isdigit: %c | %c -> %d | %d\n", number, lowcase_letter,
		ft_isdigit(number), ft_isdigit(lowcase_letter));
	printf("  ------------\n");
	printf("ft_isprint: %c | d:%d -> %d | %d\n", lowcase_letter, non_print,
		ft_isprint(lowcase_letter), ft_isprint(non_print));
	printf("  ------------\n");
	printf("ft_isalnum: %c | d:%d -> %d | %d\n", number, non_print,
		ft_isalnum(number), ft_isalnum(non_print));
	printf("  ------------\n");
	printf("ft_isascii: %c | d:%d -> %d | %d\n", lowcase_letter, outside_ascii,
		ft_isascii(lowcase_letter), ft_isascii(outside_ascii));
	printf("\n  ------------------------------\n");
}

void	check_str(void)
{
	char	*s1;


	// char s2[100];
	s1 = "Hello world!";
	printf("\n  ------------------------------\n");
	printf("\nString functions: \n\n");
	printf(" --------\n");
	printf("ft_strlen: %s -> %lu\n", s1, ft_strlen(s1));

	printf("\n  -----------\n\n");

	char	original_dst[100];
	char	ft_dst[100];
	char	*src;

	int	original_ret;
	int	ft_ret;
	int	size;

	src = "this is the source string.";
	size = 15;
	original_ret = strlcpy(original_dst, src, size);
	ft_ret = strlcpy(ft_dst, src, size);

	printf("FIRST --> strlcpy (original): '%s' -> return: %d \n", original_dst, original_ret);
	printf("\n");
	printf("SECOND -> ft_strlcpy  (mine): '%s' -> return: %d \n", ft_dst, ft_ret);
	printf("\n  ------------------------------\n");
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	// IS functions
	check_is();
	check_str();
}
