/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:53:30 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/12 06:39:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_non_standard/ft_non_standard.h"

/**
 * @brief Writes an integer as a string representation to a file descriptor.
 *
 * This function takes an integer `n` and an integer file descriptor `fd` as
 * input. It first converts `n` to a null-terminated string using `ft_itoa`.
 * Then, it calls `ft_putstr_fd` to write the string representation of `n` to
 * the file associated with `fd`. Finally, it frees the memory allocated by
 * `ft_itoa` using `free`.
 *
 * @param n The integer to be written.
 * @param fd The file descriptor of the file to write to.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	*str_n;

	str_n = ft_itoa(n);
	ft_putstr_fd(str_n, fd);
	free(str_n);
}
