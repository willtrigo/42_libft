/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:17:13 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:24:27 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_linked_list.h"

/**
 * @brief Frees the memory of a list and its elements.
 *
 * This function delete and free all nodes and set the `lst` to `null`.
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
