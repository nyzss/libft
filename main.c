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

void	test_is(void)
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
	test_isalpha(lowcase_letter, number);
	test_isdigit(number, lowcase_letter);
	test_isprint(lowcase_letter, non_print);
	test_isalnum(number, non_print);
	test_isascii(lowcase_letter, outside_ascii);
	printf("\n  ------------------------------\n");
}

void	test_str(void)
{
	const char	*s1 = "Hello world!";
	const char	*s2 = "Hello";
	const char	*src = "this is the source string.";
	const char	*haystack = "This is a haystack";
	const char	*needle = "hay";

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

void	test_mem(void)
{
	printf("\n  ------------------------------\n");
	printf("Memory functions:\n\n");
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	//test_memchr();
	//test_memcmp();
	test_calloc();
	printf("\n  ------------------------------\n");
}

int	main(void)
{
	test_str();
	test_is();
	test_mem();
}
