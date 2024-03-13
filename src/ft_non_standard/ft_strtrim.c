/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:26:51 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 00:46:15 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Removes leading and trailing characters from a string within a set of
 * characters.
 *
 * This function takes a null-terminated string `s1` and a null-terminated
 * string `set` as input. It removes leading and trailing characters from `s1`
 * that are also present in the characters defined in `set`.
 * The function first checks if both `s1` and `set` are valid. Then, it iterates
 * through `s1` from the beginning (`start` index) until it finds a character
 * that's not in the `set`. This index becomes the new starting point for the
 * trimmed string.
 * Similarly, it iterates through `s1` from the end (`end` index) backwards
 * until it finds a character that's not in the `set`. This index is used to
 * exclude trailing characters from the trimmed string.
 * Finally, the function calls `ft_substr` to extract the desired substring from
 * `s1` based on the calculated `start` and `end` indices (excluding the null
 * terminator).
 *
 * @param s1 The null-terminated string to be trimmed.
 * @param set The null-terminated string defining the characters to be removed
 * from the beginning and end of `s1`.
 *
 * @return On success, a pointer to a new string containing the trimmed version
 * of `s1` with leading and trailing characters from `set` removed. On failure
 * (including memory allocation failure or NULL input), NULL is returned. The
 * caller is responsible for freeing the returned memory using free(str).
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = DEFAULT;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + NULL_BYTE));
}
