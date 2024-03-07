/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 05:27:19 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:48:10 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_linked_list.h"

/**
 * @brief Applies a function to each element of a linked list and creates a new
 * list with the modified elements.
 *
 * This function iterates the list `lst` and applies the function `f` on the
 * content of each node. Creates a new list resulting of the successive
 * applications of the function `f`. The `del` function is used to delete the
 * content of a node if needed.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of a node
 * if needed.
 *
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
