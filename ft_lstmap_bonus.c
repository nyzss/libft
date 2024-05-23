/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:40:23 by okoca             #+#    #+#             */
/*   Updated: 2024/05/23 09:39:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*tmp;

	new_lst = NULL;
	new_node = NULL;
	tmp = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		new_node = ft_lstnew(tmp);
		if (!new_node)
		{
			(*del)(tmp);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst;
// 	t_list	*tmp_new;
// 	t_list	*tmp_old;

// 	new_lst = ft_lstnew((*f)(lst->content));
// 	if (!new_lst)
// 		return (NULL);
// 	tmp_old = lst;
// 	tmp_new = new_lst;
// 	while (tmp_old != NULL)
// 	{
// 		tmp_new->next = ft_lstnew((*f)(tmp_old->content));
// 		if (!tmp_new->next)
// 		{
// 			ft_lstclear(&new_lst, del);
// 			return (NULL);
// 		}
// 		tmp_new = tmp_new->next;
// 		tmp_old = tmp_old->next;
// 	}
// 	return (new_lst);
// }
