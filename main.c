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
#include "includes/tests.h"
#include <stdio.h>
#include <string.h>

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

int	main(void)
{
	const char	*s1 = "Hello world!";
	const char	*s2 = "Hello";
	const char	*src = "this is the source string.";
	const char	*haystack = "This is a haystack";
	const char	*needle = "hay";

	check_is();
	printf("\n  ------------------------------\n");
	printf("\nString functions: \n\n");
	test_strlen(s1);
	test_strlcpy(src, 8);
	test_strlcat(src, 15);
	test_strchr(s1, 'o');
	test_strncmp(s1, s2, 3);
	test_strnstr(haystack, needle, ft_strlen(haystack));
	test_strrchr(s1, 'o');
	printf("\n  ------------------------------\n");
}
