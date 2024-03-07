/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:06:31 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 03:40:54 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks for an ASCII character.
 *
 * This function checks the character `c` fits into the ASCII character set.
 *
 * @param c The character to be checked.
 *
 * @return A non-zero value if the character is an ASCIII character, zero
 * otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= NUL && c <= DEL);
}
