/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:43:44 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/18 08:20:41 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new node.
 *
 * The variable `content` is initialized with the value of the parameter
 * `content`. The variable `next` is initialized to NULL.
 *
 * @param content The content to create the new node with.
 * @return The new node.
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
