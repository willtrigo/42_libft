/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:01:53 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 01:03:41 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Compares the first `n` bytes (each interpreted as unsigned char) of
 * the memory areas `s1` and `s2`.
 *
 * @param s1 A pointer to the first memory area.
 * @param s2 A pointer to the second memory area.
 * @param n The number of bytes to be compared.
 * @return An integer less than, equal to, or greater than zero if the first `n`
 * bytes of `s1` is found, respectively, to be less than, to match, or be
 * greater than the first `n` bytes of `s2`. For a nonzero return value, the
 * sign is determined by the sign of the difference between the first pair of
 * bytes (interpreted as unsigned char) that differ in `s1` and `s2`. If `n` is
 * zero, the return value is zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	if (n == 0)
		return (0);
	while (++i < n)
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (0);
}
