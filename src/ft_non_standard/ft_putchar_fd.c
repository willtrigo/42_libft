/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:23:05 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 04:09:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_default.h"
#include "ft_non_standard/ft_non_standard.h"

/**
 * @brief Writes a single character to a file descriptor.
 *
 * This function takes a character `c` and an integer file descriptor `fd` as
 * input. It uses the `write` system call to write the character `c` to the file
 * associated with the file descriptor `fd`.
 *
 * @param c The character to be written.
 * @param fd The file descriptor of the file to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	if (write(fd, &c, CHAR_BYTE) == FAIL)
		perror("write");
}
