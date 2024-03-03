/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_islower(int c);

int		ft_isupper(int c);

int		ft_isalpha(int c);

int		ft_isupper(int c);

int		ft_islower(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_tolower(int c);

int		ft_toupper(int c);

int		ft_isspace(int c);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *addr, int c, size_t n);

void	ft_bzero(void *addr, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
