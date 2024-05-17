/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*allocated;

	if (n == 0 || size == 0)
	{
		allocated = (void*)malloc(1);
		ft_bzero(allocated, 1);
		return (allocated);
	}
	else if (n * size < size || n * size < n)
		return (NULL);
	allocated = (void *)malloc(n * size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, (n * size));
	return (allocated);
}

/*
int main()
{

}*/