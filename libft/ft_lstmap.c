/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:35:35 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 16:51:25 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*curr;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
	{
		ft_lstdelone(new, del);
		return (NULL);
	}
	curr = new;
	while (lst->next)
	{
		lst = lst->next;
		curr->next = ft_lstnew(f(lst->content));
		if (!curr->next)
		{
			ft_lstclear(&curr, del);
			return (NULL);
		}
		curr = curr->next;
	}
	return (new);
}
