/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 07:56:24 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:37:33 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Compares a limited length of two strings.
 *
 * This function compares the first `n` characters of the null-terminated
 * strings `s1` and `s2`. It returns 0 if the first `n` characters are
 * identical, a negative value if the first differing character in `s1` is less
 * than the corresponding character in `s2`, or a positive value if the first
 * differing character in `s1` is greater than the corresponding character in
 * `s2`.
 * If `n` is zero, the function returns 0 without comparing any characters.
 *
 * @param s1 A pointer to the first null-terminated string to be compared.
 * @param s2 A pointer to the second null-terminated string to be compared.
 * @param n The maximum number of characters to compare.
 *
 * @return An integer indicating the comparison result:
 *  - 0: If the first `n` characters are identical.
 *  - Negative value: If the first differing character in `s1` is less than the
 *  corresponding character in `s2`.
 *  - Positive value: If the first differing character in `s1` is greater than
 *  the corresponding character in `s2`.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = DEFAULT;
	if (n == DEFAULT)
		return (DEFAULT);
	while (s1[i] && (s1[i] == s2[i]) && i < (n - NULL_BYTE))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
