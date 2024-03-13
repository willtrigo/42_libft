/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 04:06:34 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 01:11:46 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_default.h"

static void	ft_set_endptr(const char *str, char **endptr);

/**
 * @brief Converts a string to a double-precision floating-point number.
 *
 * This function takes a null-terminated string `str` and an optional pointer to
 * a character pointer `endptr` as input. It attempts to convert the characters
 * in `str` to a double-precision floating-point number and stores the result.
 * The `endptr` argument, if not NULL, will be set to point to the character in
 * `str` after the converted part.
 * The function first checks if the input string `str` is valid (not NULL).
 * Then, it skips leading whitespace characters (tabs, newlines, carriage
 * returns, and spaces). It handles optional sign characters (`+` or `-`) and
 * stores the sign information.
 * It then iterates through the string, converting each encountered digit
 * character ('0' to '9') to its numerical value and accumulating the result
 * into the `nb` variable using appropriate scaling for decimal places. If a
 * decimal point is encountered, the decimal part is processed similarly,
 * keeping track of the decimal scaling factor.
 * Finally, the function calls `ft_set_endptr` to set the `endptr` if provided.
 * It divides the accumulated value (`nb`) by the decimal scaling factor and
 * applies the sign to return the converted double-precision number.
 *
 * @param str The null-terminated string to be converted to a double-precision
 * floating-point number.
 * @param endptr An optional pointer to a character pointer. If not NULL, it
 * will be set to point to the character in `str` after the converted part.
 *
 * @return On success, the converted double-precision floating-point number. On
 * failure (including invalid input or encountering a character that cannot be
 * part of a valid floating-point number), zero (0) is returned.
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
	ft_set_endptr(str, endptr);
	return (nb / decimal * sign);
}

/**
 * @brief Sets the end pointer for string conversion functions.
 *
 * This function takes a null-terminated string `str` and an optional pointer to
 * a character pointer `endptr` as input. If the `endptr` argument is not NULL,
 * it sets the value of the pointer to point to the character in `str`.
 * This function is typically used by string conversion functions like
 * `ft_strtod` to indicate the part of the string that was successfully
 * converted. The unconverted part of the string can be accessed using the value
 * stored in the `endptr`.
 *
 * @param str The null-terminated string that was used for conversion.
 * @param endptr An optional pointer to a character pointer. If not NULL, it
 * will be set to point to the character in `str` after the converted part.
 */
static void	ft_set_endptr(const char *str, char **endptr)
{
	if (endptr)
		*endptr = (char *)str;
}
