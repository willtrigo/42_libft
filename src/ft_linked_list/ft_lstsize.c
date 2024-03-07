/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 06:51:57 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:57:46 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

/**
 * @brief Counts the number of nodes in a list.
 *
 * This function iterates throught the list `lst` until it reaches the last
 * element and return the lenght of the list `lst`.
 *
 * @param lst The beginning of the list.
 *
 * @return The length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (++i && lst)
		lst = lst->next;
	return (--i);
}
