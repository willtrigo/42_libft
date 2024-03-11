/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 01:09:16 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:38:07 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function searches the null-terminated string `s` for the last occurrence
 * of the character `c` (converted to an unsigned char). It returns a pointer to
 * the last occurrence of `c` within `s`, or NULL if `c` is not found.
 *
 * @param s A pointer to the null-terminated string to be searched.
 * @param c The character to search for, converted to unsigned char.
 *
 * @return A pointer to the last occurrence of `c` in `s`, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i != DEFAULT && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
