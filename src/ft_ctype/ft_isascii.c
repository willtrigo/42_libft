/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:06:31 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/19 04:02:48 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks whether c is a 7-bit unsigned char value that fits into the
 * ASCII character set.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character falls into the tested class, zero
 * otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
