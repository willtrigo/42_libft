/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 04:06:34 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/12 04:54:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_default.h"

/**
 * @brief Converts a string to a double-precision floating-point number.
 *
 * This function attempts to convert the null-terminated string `str` to a
 * double-precision floating-point value and stores the result in `nb`. It also
 * optionally sets the value pointed to by `endptr` to the address of the first
 * character after the successfully converted part of the string.
 *
 * @param str A pointer to the null-terminated string to be converted.
 * @param endptr An optional pointer to a character pointer variable that will
 * be set to point to the first character after the successfully converted part
 * of the string. Can be NULL if the caller is not interested in this
 * information.
 *
 * @return The converted double-precision floating-point value, or zero on conversion failure.
 */
double	ft_strtod(const char *str, char **endptr)
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
	if (endptr)
		*endptr = (char *)str;
	return (nb / decimal * sign);
}
