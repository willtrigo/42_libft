/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 05:08:14 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/19 03:42:19 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for any printable character including space.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is printable, zero otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
