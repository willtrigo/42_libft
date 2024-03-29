/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:29:38 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:45:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stdlib.h"
#include "ft_default.h"

/**
 * @brief Converts a string representation of a floating-point number to a
 * double-precision value.
 *
 * This function parses the given string (`str`) and converts it to a
 * double-precision floating-point number. It handles:
 * - Optional leading whitespace (spaces, tabs, newlines, and carriage returns).
 * - Optional sign (`+` or `-`).
 * - Integer and fractional parts consisting of digits (`0` to `9`).
 * - A single decimal point (`.`).
 *
 * If the input string is invalid or an error occurs during conversion, it
 * returns 0.
 *
 * @param str A null-terminated string containing the number representation.
 *
 * @return The converted double-precision value, or 0 if an error occurs.
 */
double	ft_atof(const char *str)
{
	double	nb;
	int		decimal;
	int		sign;

	nb = DEFAULT;
	sign = DEFAULT_BEGIN;
	decimal = DEFAULT_BEGIN;
	if (str == NULL)
		return (ZERO);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= MINUS;
	while (*str >= '0' && *str <= '9')
		nb = (nb * DECIMAL) + (*str++ - '0');
	if (*str == '.')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * DECIMAL) + (*str++ - '0');
		decimal = decimal * DECIMAL;
	}
	return (nb / decimal * sign);
}
