/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:10:18 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 22:50:44 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Fills a block of memory with a specified byte value.
 *
 * This function fills the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `c`. It converts `c` to an unsigned char to ensure
 * consistent behavior with memory operations.
 *
 * @param s A pointer to the block of memory to be filled.
 * @param c The byte value to be used for filling, converted to unsigned char.
 * @param n The number of bytes to be filled.
 *
 * @return A pointer to the memory area `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(unsigned char *)(s + n) = c;
	return (s);
}
