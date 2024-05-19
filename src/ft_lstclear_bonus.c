/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:31:35 by okoca             #+#    #+#             */
/*   Updated: 2024/05/19 23:38:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*before;

	tmp = *lst;
	before = *lst;
	while (tmp != NULL)
	{
		(*del)(tmp->content);
		tmp = tmp->next;
		before = tmp;
		free(before);
	}
	*lst = NULL;
}
