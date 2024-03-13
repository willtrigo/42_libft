/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:28:16 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 00:35:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Joins two null-terminated strings into a new string.
 *
 * This function takes two null-terminated strings `s1` and `s2` as input. It
 * allocates memory for a new string and combines the characters from `s1` and
 * `s2` into the new string. The resulting string includes the null terminator
 * at the end.
 * The function first calculates the lengths of `s1` and `s2` using `ft_strlen`.
 * Then, it allocates memory for the new string using `malloc`, ensuring enough
 * space for the combined content and the null terminator. If memory allocation
 * fails, it returns NULL.
 * It then uses `ft_strlcpy` to copy the characters from `s1` and `s2` to the
 * newly allocated memory, including the null terminators from both strings.
 * Finally, it returns a pointer to the new joined string.
 *
 * @param s1 The first null-terminated string to be joined.
 * @param s2 The second null-terminated string to be joined.
 *
 * @return On success, a pointer to the new string containing the combined
 * content of `s1` and `s2`, including the null terminator. On failure
 * (including memory allocation failure or empty input strings), NULL is
 * returned. The caller is responsible for freeing the returned memory using
 * free(str).
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc((s1_len + s2_len + NULL_BYTE) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + NULL_BYTE);
	ft_strlcpy(&str[s1_len], s2, s2_len + NULL_BYTE);
	return (str);
}
