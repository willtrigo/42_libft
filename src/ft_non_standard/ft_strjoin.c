/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:28:16 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 07:46:25 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of `s1` and `s2`.
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string or NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc((s1_len + s2_len + BYTE) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + BYTE);
	ft_strlcpy(&str[s1_len], s2, s2_len + BYTE);
	return (str);
}
