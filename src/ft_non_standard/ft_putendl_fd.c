/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:31:16 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/12 06:35:19 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_string.h"
#include "ft_default.h"

/**
 * @brief Writes a null-terminated string followed by a newline character to a
 * file descriptor.
 *
 * This function takes a null-terminated string `s` and an integer file
 * descriptor `fd` as input. It uses `write` to write the string `s` (including
 * the null terminator) to the file associated with `fd`, followed by a newline
 * character ('\n').
 *
 * @param s The null-terminated string to be written.
 * @param fd fd The file descriptor of the file to write to.
 */
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", CHAR_BYTE);
}
