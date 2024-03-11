/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:26:07 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:26:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Copies a string with a specified maximum length to prevent buffer
 * overflows.
 *
 * This function copies the null-terminated string `src` to the buffer `dst`,
 * ensuring that at most `size` - 1 bytes of `src` are copied. It always
 * null-terminates the destination string, even if truncation is necessary.
 * If `size` is zero, `ft_strlcpy` returns the length of `src` without writing
 * any bytes to `dst`. This allows you to safely determine the required buffer
 * size before potentially truncating the string.
 *
 * @param dst The destination buffer where the string will be copied.
 * @param src The null-terminated source string to be copied.
 * @param size The maximum number of bytes to be copied to `dst`, including the
 * null terminator.
 *
 * @return The total length of `src`, which might be greater than the length of
 * the truncated string copied to `dst`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = INIT;
	if (!size)
		return (ft_strlen(src));
	while (*(src + ++i) && --size)
		*(dst + i) = *(src + i);
	*(dst + i) = '\0';
	return (ft_strlen(src));
}
