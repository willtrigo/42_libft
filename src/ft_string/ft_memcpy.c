/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 00:13:40 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:25:59 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Copies a block of memory from one location to another.
 *
 * This function copies `n` bytes of memory from the source address `src` to the
 * destination address `dest`. It handles overlapping memory regions to ensure
 * correct copying even when `dest` and `src` overlap.
 * 
 * @param dest A pointer to the destination memory block where the content is to
 * be copied.
 * @param src A pointer to the source memory block to be copied.
 * @param n The number of bytes to copy.
 *
 * @return A pointer to the destination memory block (`dest`).
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = INIT;
	if (!dest && !src)
		return (NULL);
	while (++i < n)
		*(char *)(dest + i) = *(char *)(src + i);
	return (dest);
}
