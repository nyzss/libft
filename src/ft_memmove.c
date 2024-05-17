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
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

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

int main()
{
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
	void *ptr = ft_memmove(sResult + 1, sResult, 2);
	 printf("%d\n", ptr == sResult + 1);
	  //&& !memcmp(sResult, sResult2, 7))
}

/*
	//4 
	 check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)); showLeaks(); //reverse

	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
*/


/*
void    *ft_memmove(void *dest, const void *src, size_t n)
{
        size_t                  i;
        const char      *from;
        char                    *to;

        from = src;
        to = dest;
        if (to > from)
        {
                i = n;
                while (i > 0)
                {
                        to[i - 1] = from[i - 1];
                        i--;
                }
                to[i] = from[i];
        }
        else
        {
                i = 0;
                while (i < n)
                {
                        to[i] = from[i];
                        i++;
                }
        }
        return (dest);
}
*/