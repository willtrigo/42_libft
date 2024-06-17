/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:20:57 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/17 01:53:26 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_default.h"

static void	ft_set_endptr(const char *str, char **endptr);

/**
 * @brief Converts a string to an integer.
 *
 * This function converts the string pointed to by `str` to an integer value.
 * The function stops reading the string at the first occurrence of a character
 * that is not a valid decimal digit or a sign character. The function stores a
 * pointer to the character that stopped the reading in the location pointed to
 * by `endptr` if `endptr` is not NULL.
 *
 * @param str The string to convert.
 * @param endptr A pointer to a location where to store a pointer to the 
 * character that stopped the reading. Can be NULL.
 *
 * @return On success, the converted integer number. On failure (including
 * invalid input or encountering a character that cannot be part of a valid
 * integer), zero (0) is returned.
 */
int	ft_strtoi(const char *str, char **endptr)
{
	int	nb;
	int	sign;

	nb = DEFAULT;
	sign = DEFAULT_BEGIN;
	if (str == NULL)
		return (ZERO);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= MINUS;
	while (*str >= '0' && *str <= '9')
		nb = (nb * DECIMAL) + (*str++ - '0');
	ft_set_endptr(str, endptr);
	return (nb * sign);
}

/**
 * @brief Sets the end pointer for string conversion functions.
 *
 * This function takes a null-terminated string `str` and an optional pointer to
 * a character pointer `endptr` as input. If the `endptr` argument is not NULL,
 * it sets the value of the pointer to point to the character in `str`.
 * This function is typically used by string conversion functions like
 * `ft_strtoi` to indicate the part of the string that was successfully
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
