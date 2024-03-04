/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include <bsd/string.h>
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "libft.h"

void	test_strlcat(const char *src, size_t size);

void	test_strlcpy(const char *src, size_t size);

void	test_strlen(const char *str);

void	test_strrchr(const char *s, int c);

void	test_strnstr(const char *haystack, const char *needle, size_t len);

void	test_strncmp(const char *s1, const char *s2, size_t n);

void	test_strchr(const char *s, int c);

void	test_isalpha(char lowcase_letter, char number);

void	test_isdigit(char number, char lowcase_letter);

void	test_isprint(char lowcase_letter, char non_print);

void	test_isalnum(char number, char non_print);

void	test_isascii(char lowcase_letter, int outside_ascii);

void	test_memset(void);

void	test_bzero(void);

void	test_memcpy(void);

void	test_memmove(void);

void	test_memchr(void);

void	test_memcmp(void);

void	test_calloc(void);

void	print_memory(const void *mem, size_t size);

#endif
