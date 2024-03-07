/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:43:44 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:51:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_linked_list.h"

/**
 * @brief Allocates and initializes a new list node.
 *
 * This function allocates memory for a new linked list node using `malloc`. If
 * successful, it sets the content of the node to the provided `content` and the
 * next pointer to NULL. Otherwise, it returns NULL.
 *
 * @param content The content to be stored in the new node.
 *
 * @return A pointer to the newly created list node, or NULL if allocation
 * fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node_new;

	node_new = malloc(sizeof(t_list));
	if (!node_new)
		return (NULL);
	node_new->content = content;
	node_new->next = NULL;
	return (node_new);
}
