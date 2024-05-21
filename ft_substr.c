/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	while (len && s[start + i] && i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
#include <stdio.h>
int main()
{
	// char *str = "01234";
	// size_t size = 10;

	// char *ret = ft_substr(str, 10, size);
	char *new = ft_substr("hola", 4294967295, 0);

	printf("mine result: \"%s\"\n", new);
	// printf("mine result: \"%s\"\n", ret);
	// printf("real result: \"%s\"\n", "");
}
*/
// old func, missing some stuff
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*new_str;
// 	size_t	i;

// 	i = 0;
// 	if (start >= ft_strlen(s))
// 		len = 0;
// 	new_str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!new_str)
// 		return (NULL);
// 	while (len && s[start + i] && i < len)
// 	{
// 		new_str[i] = s[start + i];
// 		i++;
// 	}
// 	new_str[len] = '\0';
// 	return (new_str);
// }
