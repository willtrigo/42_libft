/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:51:31 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/12 04:32:19 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"

/**
 * @brief Checks if a string represents a valid double-precision floating-point
 * number.
 *
 * This function attempts to convert the null-terminated string `str` to a
 * double-precision floating-point value. It then checks if the entire string
 * was consumed during the conversion by examining the value pointed to by the
 * `endptr` argument passed to `ft_strtod`.
 * If the entire string could be converted to a double and `endptr` points to
 * the null terminator, the function returns 1 (true). Otherwise, it returns 0
 * (false).
 *
 * @param str A pointer to the null-terminated string to be checked.
 *
 * @return 1 (true) if the string represents a valid double, 0 (false)
 * otherwise.
 */
int	ft_isdouble(const char *str)
{
	char	*endptr;

	ft_strtod(str, &endptr);
	return (*endptr == '\0');
}
