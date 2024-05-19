/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	i = 0;
	src_c = src;
	dst_c = dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
// 	int src = 10;

// 	int dest = 4;
// 	printf("%d\n", dest);

// 	ft_memcpy(&dest, &src ,4);
// 	printf("%d\n", dest);
// }

// int main()
// {
// 	char *s1 = "Hello les bg";
// 	char *s2 = "Hello les bg";

// 	char *s3 = (char *)malloc(sizeof(char) * 6);
// 	char *s4 = (char *)malloc(sizeof(char) * 6);

// 	ft_memcpy(s3, s1, 5);
// 	memcpy(s4, s2, 5);

// 	printf("%s\n", s3);
// 	printf("%s\n", s4);
// }

// int    main(void)
// {
//     char    str[] = "abcdef123456789";
//     //char    str2[] = "Hello les BG";
//     char    str3[] = "abcdef123456789";

//     ft_memcpy(str+3, str, 5);
//     memcpy(str3+3, str3, 5);

//     printf("%s\n", str);
//     printf("%s\n", str3);
// //    printf("%s\n", (char *)memmove(str2+3, str2, 5));

// }
