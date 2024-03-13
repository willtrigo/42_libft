/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 06:22:34 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 01:18:43 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_non_standard/ft_get_next_line.h"

/**
 * @brief Add a new node in the linked list.
 *
 * @param buf_hist Address of the linked list.
 * @param buf_new Address of the new node.
 */
void	ft_add_buf(t_buf_hist **buf_hist, t_buf_hist *buf_new)
{
	t_buf_hist	*buf_hist_temp;

	if (buf_new)
	{
		if (!*buf_hist)
			*buf_hist = buf_new;
		else
		{
			buf_hist_temp = *buf_hist;
			while (buf_hist_temp->next)
				buf_hist_temp = buf_hist_temp->next;
			buf_hist_temp->next = buf_new;
		}
	}
}

/**
 * @brief Add a char in the node.
 *
 * @param c char that will be add in the node.
 * @return A new node with the char and the next with `null`.
 */
t_buf_hist	*ft_buf_new(char c)
{
	t_buf_hist	*buf_new;

	buf_new = malloc(sizeof(t_buf_hist));
	if (!buf_new)
	{
		free(buf_new);
		return (NULL);
	}
	buf_new->buf_char = c;
	buf_new->next = NULL;
	return (buf_new);
}

/**
 * @brief Free all nodes in the list and return `null`.
 *
 * @param buf The linked list.
 * @return NULL.
 */
char	*free_buf(t_buf_hist *buf)
{
	t_buf_hist	*buf_temp;

	buf_temp = buf;
	while (buf_temp)
	{
		buf_temp = buf_temp->next;
		free(buf);
		buf = buf_temp;
	}
	buf_temp = NULL;
	return (NULL);
}
