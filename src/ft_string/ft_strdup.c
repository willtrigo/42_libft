/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:13:07 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 04:09:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Returns a pointer to a new string which is a duplicate of the string
 * `s`. Memory for the new string is obtained with malloc(3).
 *
 * @param s The string to be duplicated.
 * @return A pointer to the duplicated string. NULL if the allocation fails.
 */
char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = malloc(ft_strlen(s) + BYTE);
	if (!new_s)
		return (NULL);
	while (*s)
		new_s[i++] = *s++;
	new_s[i] = '\0';
	return (new_s);
}
