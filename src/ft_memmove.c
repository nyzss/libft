/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                  =         */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dst_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	while (i < n)
	{
		if (src_c < dst_c && dst_c < src_c + n)
			dst_c[n - i] = src_c[n - i];
		else
			dst_c[i] = src_c[i];
		i++;
	}
	return (dest);
}

// int main()
// {

// }

/*
	//4 
	 check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)); showLeaks(); //reverse

	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
*/