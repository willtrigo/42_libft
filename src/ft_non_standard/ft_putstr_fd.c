/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:52:17 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 03:45:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_default.h"
#include "ft_non_standard/ft_non_standard.h"
#include "ft_string.h"

/**
 * @brief Writes a null-terminated string to a file descriptor.
 *
 * This function takes a null-terminated string `s` and an integer file
 * descriptor `fd` as input. It uses the `write` system call to write the entire
 * content of the string `s` (including the null terminator) to the file
 * associated with the file descriptor `fd`.
 *
 * @param s The null-terminated string to be written.
 * @param fd The file descriptor of the file to write to.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (write(fd, s, ft_strlen(s)) == FAIL)
		perror("write");
}
