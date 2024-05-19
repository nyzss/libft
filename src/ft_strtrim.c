/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		end;
	char	*new;

	i = 0;
	j = 0;
	k = 0;
	end = ft_strlen(str);
	while (str[i] && is_set(str[i], set))
		i++;
	while (str[end - j - 1] && is_set(str[end - j - 1], set))
		j++;
	new = (char *)malloc(sizeof(char) * (end - j - i + 1));
	if (!new)
		return (NULL);
	while (k < end - j - i)
	{
		new[k] = str[i + k];
		k++;
	}
	new[k] = '\0';
	return (new);
}
