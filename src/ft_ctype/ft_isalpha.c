/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:40:13 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 03:26:54 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks for an alphabetic character (letter).
 *
 * This function checks the character 'c' is alphabet (Uppercase letter or 
 * lowcase letter).
 *
 * @param c The character to be checked.
 *
 * @return A non-zero value if the character is alphabetic, zero otherwise.
 */
int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
