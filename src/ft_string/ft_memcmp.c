/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:01:53 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:25:42 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Compares two blocks of memory.
 *
 * @param s1 A pointer to the first memory block to compare.
 * @param s2 A pointer to the second memory block to compare.
 * @param n The number of bytes to compare.
 *
 * @return An integer less than, equal to, or greater than zero if `s1` is found
 * to be less than, equal to, or greater than `s2` based on the first differing
 * byte.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = INIT;
	if (n == DEFAULT)
		return (DEFAULT);
	while (++i < n)
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (DEFAULT);
}
