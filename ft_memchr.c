/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 10:36:52 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*loc;
	unsigned char	cast;

	i = 0;
	loc = (unsigned char *)s;
	cast = (unsigned char) c;
	while (i < n)
	{
		if (loc[i] == cast)
			return ((void *)&loc[i]);
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	void *val = ft_memchr(s, 2 + 256, 3) == s + 2 //Cast check


}
*/
