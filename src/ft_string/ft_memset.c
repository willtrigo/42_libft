/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:10:18 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 04:03:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Fills the first `n` bytes of the memory area pointed to by `s` with
 * the constant byte `c`.
 *
 * @param s A pointer to the memory area to be filled.
 * @param c The character to fill the memory area with.
 * @param n The number of bytes to be filled.
 * @return A pointer to the memory area `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(unsigned char *)(s + n) = c;
	return (s);
}
