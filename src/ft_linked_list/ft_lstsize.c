/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 06:51:57 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/18 08:20:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

/**
 * @brief Counts the number of nodes in a list.
 *
 * @param lst The beginning of the list.
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
