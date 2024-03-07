/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 06:13:48 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 04:32:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_linked_list.h"

/**
 * @brief Free the memory of a element from the list.
 *
 * This function delete the content passing the content to `del` and free the
 * node `lst`.
 *
 * @param lst The node will be free.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
