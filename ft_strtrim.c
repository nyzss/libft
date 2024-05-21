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

// small func cause the main func was over 25 lines.
// it just checks if the total len of the trimmed string
// is less or equal to zero, if so i just make it so that
// end == 0, cause my malloc() does the sub of the 3 params + 1, giving me 0
void	handle_blank(int *end, int j, int i)
{
	if ((*end - j - i + 1) <= 0)
		*end += j;
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
	handle_blank(&end, j, i);
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

/*
int main()
{
	char	*s1 = "  \t \t \n   \n\n\n\t";
	char	*s2 = "";

	char *result = ft_strtrim(s1, " \t\n");

	printf("return: %s\n", result);
	printf("awaited: %s\n", s2);
}
*/
