/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:36:41 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:56:11 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_linked_list.h"

/*** @brief Finds the last element of a linked list.
 *
 * This function iterates through the list `lst` until it reaches the last
 * element and return the last element.
 *
 * @param lst A pointer to the first element of the list.
 *
 * @return A pointer to the last element of the list or NULL if the list is 
 * empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
