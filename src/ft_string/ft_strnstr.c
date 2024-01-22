/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:12:41 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 04:51:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Locates the first occurrence of the null-terminated string `little` in
 * the string `big`, where not more than `len` characters are searched.
 *
 * @param big The string to be scanned.
 * @param little The string to be searched for.
 * @param len The maximum number of characters to be searched.
 * @return If `little` is an empty string, `big` is returned; if `little` occurs
 * nowhere in `big`, NULL is returned; otherwise a pointer to the first
 * character of the first occurrence of `little` is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (*big && i <= len)
	{
		if (len - i++ >= little_len && !ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
