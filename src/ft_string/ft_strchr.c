/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:14:49 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 22:53:55 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * This function searches the null-terminated string `s` for the first
 * occurrence of the character `c` (converted to an unsigned char). It returns
 * a pointer to the first occurrence of `c` within `s`, or NULL if `c` is not
 * found.
 *
 * @param s A pointer to the null-terminated string to be searched.
 * @param c The character to search for, converted to unsigned char.
 *
 * @return A pointer to the first occurrence of `c` in `s`, or NULL if not
 * found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
