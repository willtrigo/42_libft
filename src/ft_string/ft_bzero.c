/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:04:20 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/21 23:11:09 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Erase the data in the `n` bytes of the memory starting at the
 * location pointed to by `s`, by writing zeros (bytes containing '\0') to that
 * area.
 *
 * @param s A pointer to the memory area to be erased.
 * @param n The number of bytes to be erased.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
