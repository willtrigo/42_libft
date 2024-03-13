/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:23:56 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 00:51:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Creates a substring from a given string.
 *
 * This function takes a null-terminated string `s`, an unsigned integer `start`
 * index, and a `size_t` length `len` as input. It extracts a substring from the
 * original string `s` starting at the specified `start` index and continuing
 * for a specified `len`.
 * The function first checks if the input string `s` is valid. Then, it
 * calculates the length of the original string `s_len` using `ft_strlen`.
 * It handles edge cases:
    - If the `start` index is greater than or equal to the length of the
	original string (`s_len`), an empty string is returned using
	`ft_strdup("")`.
 * It then allocates memory for the new substring using `malloc`. The size of
 * the allocated memory depends on whether the requested length (`len`) is
 * greater than the remaining characters after the `start` index:
    - If `len` is greater than the remaining characters (`s_len - start`), the
	function allocates enough space to include all characters from the `start`
	index until the end of the original string (`s_len`).
    - Otherwise, it allocates space for the requested length (`len`).
 * If memory allocation is successful (`s_new` is not NULL), the function
 * ensures that the copied length (`len`) doesn't exceed the available
 * characters in the original string, including the null terminator. Then, it
 * uses `ft_strlcpy` to copy the desired substring from `s` to the newly
 * allocated memory `s_new`.
 * Finally, the function returns a pointer to the new substring or NULL on
 * failure (including memory allocation failure or invalid input). The caller
 * is responsible for freeing the returned memory using free(s_new).
 *
 * @param s The null-terminated string from which the substring will be
 * extracted.
 * @param start The starting index (unsigned integer) within the original string
 * `s` for the substring.
 * @param len The length (size_t) of the desired substring.
 *
 * @return On success, a pointer to a new string containing the extracted
 * substring. On failure (including memory allocation failure, NULL input
 * string, or a start index greater than or equal to the original string
 * length), NULL is returned. The caller is responsible for freeing the returned
 * memory using free(s_new).
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_new;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start >= len)
		s_new = malloc((len + NULL_BYTE) * sizeof(char));
	else
		s_new = malloc((s_len - start + NULL_BYTE) * sizeof(char));
	if (s_new)
	{
		if (len > s_len + NULL_BYTE)
			len = s_len + NULL_BYTE;
		ft_strlcpy(s_new, (s + start), (len + NULL_BYTE));
	}
	else
		return (NULL);
	return (s_new);
}
