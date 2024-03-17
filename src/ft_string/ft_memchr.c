/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:06:12 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 04:51:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Locates the first occurrence of a byte in memory.
 *
 * This function searches the first `n` bytes of the memory pointed to by `s`
 * for the character `c` (converted to an unsigned char). It returns a pointer
 * to the first occurrence of `c` in the memory block, or NULL if the character
 * is not found within the first `n` bytes.
 *
 * @param s A pointer to the memory block to be searched.
 * @param c The character value to be searched.
 * @param n The number of bytes to search.
 *
 * @return A pointer to the first occurrence of `c` in the memory block, or
 * NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
