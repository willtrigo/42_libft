/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:35:19 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 03:42:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for a uppercase character.
 *
 * This function checks the character `c` is a uppercase letter.
 *
 * @param c The character to be checked.
 *
 * @return A non-zero value if the character is a uppercase letter, zero
 * otherwise.
 */
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
