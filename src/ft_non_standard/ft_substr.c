/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 05:23:56 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 07:46:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string
 * `s`.
 *
 * The substring begins at index `start` and is of maximum size `len`.
 *
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string `s`.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
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
		s_new = malloc((len + BYTE) * sizeof(char));
	else
		s_new = malloc((s_len - start + BYTE) * sizeof(char));
	if (s_new)
	{
		if (len > s_len + BYTE)
			len = s_len + BYTE;
		ft_strlcpy(s_new, (s + start), (len + BYTE));
	}
	else
		return (NULL);
	return (s_new);
}
