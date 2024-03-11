/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:01:53 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 07:15:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

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

	i = STRING_INIT;
	if (n == STRING_DEFAULT)
		return (STRING_DEFAULT);
	while (++i < n)
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (STRING_DEFAULT);
}
