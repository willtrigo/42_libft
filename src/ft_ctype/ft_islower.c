/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:37:13 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/19 06:41:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for a lowercase character.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is a lowercase letter, zero
 * otherwise.
 */
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
