/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/18 23:23:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while ((needle[j] && needle[j] == haystack[i + j]) && i + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "", 10)))
			ft_print_result("NULL");
*/
/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	// char haystack[30] = "aaabcabcd";
	char haystack[30] = "lorem ipsum dolor sit amet";
	// char needle[10] = "aabc";
	char *empty = "";

	char *real = strnstr(haystack, "", 10);
	char *mine = ft_strnstr(haystack, "", 10);

	printf("real: %s, result: %d\n", real, real == empty);
	printf("mine: %s, result: %d\n", mine, mine == empty);
}
*/

/*
tests that are not passing:
check(ft_strnstr(empty, "", -1) == empty); good
check(ft_strnstr(empty, "", 0) == empty); good
check(ft_strnstr(haystack, "cd", 8) == NULL);
*/
