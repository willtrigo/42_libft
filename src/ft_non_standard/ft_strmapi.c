/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:08:33 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 00:42:03 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_string.h"
#include "ft_stdlib.h"
#include "ft_default.h"

/**
 * @brief Applies a function to each character of a string and returns a new
 * string with the modifications.
 *
 * This function takes a null-terminated string `s` and a pointer to a function
 * `f` as input. The function `f` takes two arguments: an unsigned integer
 * `index` and a character.
 * `ft_strmapi` iterates over each character of the string `s` (excluding the
 * null terminator) and calls the function `f` for each character. The function
 * `f` receives the current character's index (starting from 0) and the
 * character itself. The return value of `f` is used to modify the corresponding
 * character in the new string.
 * The function first checks if both `s` and `f` are valid. Then, it allocates
 * memory for a new string using `ft_calloc` with the same length as `s`
 * (excluding the null terminator) and an extra byte for the null terminator.
 * If memory allocation fails, it returns NULL.
 * It then iterates through the characters of `s`, calls `f` for each character
 * and its index, and stores the return value of `f` in the corresponding
 * character of the new string. Finally, it returns a pointer to the new
 * modified string.
 *
 * @param s The null-terminated string to be processed.
 * @param f A pointer to a function that takes an unsigned integer index and a
 * character as arguments. This function will be applied to each character of
 * the string, and its return value will be used to modify the corresponding
 * character in the new string.
 *
 * @return On success, a pointer to a new string containing the modified
 * characters based on the function `f`. On failure (including memory allocation
 * failure or NULL input), NULL is returned. The caller is responsible for
 * freeing the returned memory using free(str).
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	long	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = INIT;
	str = ft_calloc(ft_strlen(s) + NULL_BYTE, sizeof(char));
	if (!str)
		return (NULL);
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
