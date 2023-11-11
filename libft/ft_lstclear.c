/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:11:35 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 16:50:18 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*root;

	root = *lst;
	if (!root || !del)
		return ;
	while (root)
	{
		temp = root->next;
		ft_lstdelone(root, del);
		root = temp;
	}
	*lst = NULL;
}
