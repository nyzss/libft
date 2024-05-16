/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/16 15:04:28 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_tolower(int c);

int		ft_toupper(int c);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strdup(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *str);

 
void	*ft_memset(void *addr, int c, size_t n);

void	ft_bzero(void *addr, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_calloc(size_t n, size_t size);

char	*ft_strtrim(char const *str, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	**ft_split(char const *str, char c);

char	*ft_itoa(int n);

void	ft_striteri(char *str, void (*f)(unsigned int, char *));

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

#endif
