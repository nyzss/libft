/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/19 17:07:33 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && i < ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char *dest = malloc(sizeof(char) * 100);
	char *real_dest = malloc(sizeof(char) * 100);

	// mod

	const char *value;
	value = "lorem ipsum dolor sit amet";

	size_t size;
	size = 0;

	// mod

	size_t val = ft_strlcpy(dest, value, size);
	size_t real_val = strlcpy(real_dest, value, size);

	printf("dest: %s\nreal_dest: %s\n", dest, real_dest);
	printf("val: %d\nreal val: %d\n", (int)val, (int)real_val);
}
*/
