/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:22:16 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 22:48:17 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Copies a block of memory, ensuring correct behavior even with
 * overlapping regions.
 *
 * This function copies `n` bytes of memory from the source address `src` to
 * the destination address `dest`, handling overlapping memory regions correctly
 * to avoid undefined behavior. It copies bytes in a direction that avoids
 * overwriting the source before it's fully copied.
 *
 * @param dest A pointer to the destination memory block where the content is
 * to be copied.
 * @param src A pointer to the source memory block to be copied.
 * @param n The number of bytes to copy.
 *
 * @return A pointer to the destination memory block (`dest`).
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*(char *)(dest + n) = *(char *)(src + n);
	return (dest);
}
