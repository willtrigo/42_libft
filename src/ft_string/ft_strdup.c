/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:13:07 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 23:01:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Allocates and returns a new string representing a duplicate of the
 * provided string.
 *
 * This function creates a new string on the heap with enough space to hold a
 * copy of the null-terminated string `s`, including the null terminator. It
 * then copies the characters from `s` to the newly allocated memory.
 * If memory allocation fails, `ft_strdup` returns NULL. Otherwise, it returns
 * a pointer to the newly created duplicate string. Remember to free the
 * allocated memory using `free` when you no longer need the duplicate string
 * to avoid memory leaks.
 *
 * @param s A pointer to the null-terminated string to be duplicated.
 *
 * @return A pointer to a new string containing a duplicate of `s`, or NULL if
 * memory allocation fails.
 */
char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = malloc(ft_strlen(s) + NULL_BYTE);
	if (!new_s)
		return (NULL);
	while (*s)
		new_s[i++] = *s++;
	new_s[i] = '\0';
	return (new_s);
}
