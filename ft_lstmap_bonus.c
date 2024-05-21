/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:40:23 by okoca             #+#    #+#             */
/*   Updated: 2024/05/21 10:28:24 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (!new_node)
		{
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
