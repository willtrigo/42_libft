/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:24:19 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/19 06:51:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks for an alphanumeric character.
 *
 * It is equivalent to (isalpha(c) || isdigit(c)).
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is an alphanumeric character, zero
 * otherwise.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
