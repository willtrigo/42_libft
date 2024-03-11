/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:32:49 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/11 01:45:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_default.h"

/**
 * @brief Converts a string representation of a integer-point number to an
 * integer value.
 *
 * This function parses the given string (`str`) and converts it to a
 * integer number. It handles:
 * - Optional leading whitespace (spaces, tabs, newlines, and carriage returns).
 * - Optional sign (`+` or `-`).
 * - Integer parts consisting of digits (`0` to `9`).
 *
 * @param str A null-terminated string containing the number representation.
 *
 * @return The converted integer value, or 0 if an error occurs.
 */
int	ft_atoi(const char *nptr)
{
	int	nb;
	int	sign;

	nb = DEFAULT;
	sign = DEFAULT_BEGIN;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign *= MINUS;
	while (*nptr >= '0' && *nptr <= '9')
		nb = (nb * DECIMAL) + (*nptr++ - '0');
	return (nb * sign);
}
