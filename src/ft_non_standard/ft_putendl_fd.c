/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:31:16 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 03:43:52 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	if (write(fd, s, ft_strlen(s)) == FAIL)
		perror("write");
	if (write(fd, "\n", CHAR_BYTE) == FAIL)
		perror("write");
}
