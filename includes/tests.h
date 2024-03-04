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
# include "libft.h"

void	test_strlcat(const char *src, size_t size);

void	test_strlcpy(const char *src, size_t size);

void	test_strlen(const char *str);

void	test_strrchr(const char *s, int c);

void	test_strnstr(const char *haystack, const char *needle, size_t len);

void	test_strncmp(const char *s1, const char *s2, size_t n);

void	test_strchr(const char *s, int c);

#endif
