/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 10:40:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if source starts before destination starts,
// and (source + n) starts after destination starts,
// we begin copying memory from the end of source

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	i = 0;
	destination = dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		if (source < destination)
			destination[n - i - 1] = source[n - i - 1];
		else
			destination[i] = source[i];
		i++;
	}
	return (dest);
}

/*
void *old_ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
	size_t i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n)
	{
		if (source < destination && destination < source + n)
			destination[n - i] = source[n - i];
		else
			destination[i] = source[i];
		i++;
	}
	return (dest);
}
*/

/*
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char my_func[] = {67, 68, 67, 68, 69, 0, 45};
	while (i < 7)
	{
		printf("%d ", my_func[i]);
		i++;
	}
	printf("\n\n");
	char real_func[] = {67, 68, 67, 68, 69, 0, 45};

	// char result_we_want[] = {67, 67, 68, 68, 69, 0, 45};

	ft_memmove(my_func + 1, my_func, 2);
	memmove(real_func + 1, real_func, 2);

	i = 0;
	while (i < 7)
	{
		if (my_func[i] < 10 && real_func[i] < 10)
			printf("0%d - 0%d", my_func[i], real_func[i]);
		else
		{
			printf("%d - %d", my_func[i], real_func[i]);
		}
		if (my_func[i] != real_func[i])
			printf(" | NOT SAME\n");
		else
		{
			printf("\n");
		}
		i++;
	}
	// should return 1 if it works
	printf("\nworks: %d\n", !memcmp(my_func, real_func, 7));
}
*/
/*
	//4
	test qui ne passe pas:
	 check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 &&
	 !memcmp(sResult, sResult2, 7)); showLeaks(); //reverse

	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
*/
