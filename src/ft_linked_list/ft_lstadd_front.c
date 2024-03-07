/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 06:37:50 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:27:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

/**
 * @brief Node is add in the beginning of the list.
 *
 * This function add the node `new` at the beginning of the list `lst`.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		if (!lst)
			*lst = new;
		else
		{
			new->next = *lst;
			*lst = new;
		}
	}
}
