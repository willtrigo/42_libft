/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:17:13 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/20 02:55:43 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

/**
 * @brief Deletes and frees the given node and every successor of that node,
 * using the function `del` and free(3). Finally, the pointer to the list must
 * be set to NULL.
 *
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the
 * node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_temp;

	while (*lst)
	{
		lst_temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_temp;
	}
	*lst = NULL;
}
