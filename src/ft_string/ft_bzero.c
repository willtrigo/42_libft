/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:04:20 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 07:22:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Fills a block of memory with a specific character.
 *
 * This function fills the first `n` bytes of the memory pointed to by `s` with
 * the character `\0` (null character).
 *
 * @param s A pointer to the memory area to be filled.
 * @param n The number of bytes to be filled.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
