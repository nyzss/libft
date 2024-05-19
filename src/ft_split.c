/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/05/19 22:13:15 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	count_words(char *str, char sep)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (!is_separator(str[i], sep) && is_separator(str[i + 1], sep))
			word_count++;
		i++;
	}
	return (word_count);
}

static char	*ft_strdupsep(char *first, char sep)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (!is_separator(first[j], sep))
		j++;
	new = (char *)malloc(sizeof(char) * (j + 1));
	if (!new)
		return (NULL);
	while (i < j)
	{
		new[i] = first[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		r_index;
	char	**result;

	i = 0;
	r_index = 0;
	result = (char **)malloc(sizeof(char *) * (count_words((char *)str, c)
				+ 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (is_separator(str[i], c))
			i++;
		else
		{
			result[r_index] = ft_strdupsep((char *)&str[i], c);
			i += ft_strlen(result[r_index]);
			r_index++;
		}
	}
	return (result);
}

/*
#include <stdio.h>

int main()
{
	printf("hell owlrd");
	char	**expected = ft_split("\0aa\0bbb", '\0');

	int i = 0;
	while (expected[i])
	{
		printf("%s\n", expected[i]);
		i++;
	}
}
*/
