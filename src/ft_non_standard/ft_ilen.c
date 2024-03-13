/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:58:48 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 02:13:15 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_default.h"

/**
 * @brief Calculates the number of places required to represent the absolute
 * value of an integer.
 *
 * This function takes an integer `n` as input and returns the number of places
 * needed to represent the absolute value of `n`.
 *
 * @param n The integer that will be used to determine how much places is
 * required.
 *
 * @return The number of decimal places required to represent the absolute value
 * of `n`.
 */
int	ft_ilen(int n)
{
	int	i;

	i = DEFAULT;
	if (n <= DEFAULT && i++)
		n = -n;
	while (n > DEFAULT && i++)
		n /= DECIMAL;
	return (i);
}
