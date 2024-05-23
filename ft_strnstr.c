/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 09:13:01 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if (little[j] == big[i])
		{
			while ((little[j] && little[j] == big[i + j]) && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
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
	// char big[30] = "aaabcabcd";
	char big[30] = "lorem ipsum dolor sit amet";
	// char little[10] = "aabc";
	char *empty = "";

	char *real = strnstr(big, "", 10);
	char *mine = ft_strnstr(big, "", 10);

	printf("real: %s, result: %d\n", real, real == empty);
	printf("mine: %s, result: %d\n", mine, mine == empty);
}
*/

/*
tests that are not passing:
check(ft_strnstr(empty, "", -1) == empty); good
check(ft_strnstr(empty, "", 0) == empty); good
check(ft_strnstr(big, "cd", 8) == NULL);
*/
