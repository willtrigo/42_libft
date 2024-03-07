/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 05:08:14 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 03:41:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for a printable character including space.
 *
 * This function checks the character `c` is a printable character.
 *
 * @param c The character to be checked.
 *
 * @return A non-zero value if the character is printable, zero otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
