/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:06:55 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:26:03 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

/**
 * @brief Node is add in the end of the list.
 *
 * This function adds the node `new` at the end of the list `lst`.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
