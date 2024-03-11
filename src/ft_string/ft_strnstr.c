/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:12:41 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 23:44:25 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Locates the first occurrence of a substring within a limited search
 * length, similar to C's strnstr.
 *
 * This function searches the null-terminated string `big` for the first
 * occurrence of the entire null-terminated substring `little` within the first
 * `len` characters of `big`. It returns a pointer to the beginning of the first
 * occurrence of `little` in `big`, or NULL if `little` is not found within the
 * first `len` characters.
 * If `little` is an empty string, the function returns `big`.
 *
 * @param big big The null-terminated string to be searched.
 * @param little little The null-terminated substring to be searched for.
 * @param len The maximum number of characters to search in `big`.
 *
 * @return A pointer to the beginning of the first occurrence of `little` in
 * `big`, or NULL if not found within `len` characters.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = STRING_DEFAULT;
	little_len = ft_strlen(little);
	if (little_len == STRING_DEFAULT)
		return ((char *)big);
	while (*big && i <= len)
	{
		if (len - i++ >= little_len && !ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
