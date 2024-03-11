/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:44:16 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:26:33 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Appends a string to an existing string, with safeguards against buffer
 * overflows.
 *
 * This function appends the null-terminated string `src` to the end of the
 * destination string `dst`. It ensures that the total length of the resulting
 * string (including the null terminator) does not exceed the specified `size`
 * of the destination buffer.
 *
 * @param dst The destination string where the source string will be appended.
 * @param src The null-terminated source string to be appended.
 * @param size The maximum size of the destination buffer, including the null
 * terminator.
 *
 * @return The total length (including the truncated part of `src`) that would
 * have been necessary for a complete append operation, or the length of `src`
 * if the append operation was successful without truncation.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] && (dst_len + NULL_BYTE) < size)
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
