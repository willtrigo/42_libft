/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:06:12 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/21 23:26:55 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Scans the initial `n` bytes of the memory area pointed to by `s` for
 * the first instance of `c`.
 *
 * @param s A pointer to the memory area to be scanned.
 * @param c The character to be located.
 * @param n The number of bytes to be scanned.
 * @return A pointer to the matching byte or NULL if the character does not
 * occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == '\0')
		return (NULL);
	while (n--)
	{
		if (*(char *)s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
