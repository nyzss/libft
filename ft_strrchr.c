/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 10:40:57 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	char			*occ;
	unsigned char	cast;

	i = 0;
	cast = (unsigned char) c;
	occ = NULL;
	while (str[i])
	{
		if (str[i] == cast)
			occ = (char *)&str[i];
		i++;
	}
	if (str[i] == cast)
		occ = (char *)&str[i];
	return (occ);
}
