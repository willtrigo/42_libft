/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:51:31 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/21 20:10:18 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard.h"

/**
 * @brief Check if the string is a double.
 *
 * @param str The string that will be check with `strtod`.
 * @return True if is a double and false if is not.
 */
int	ft_isdouble(const char *str)
{
	char	*endptr;

	strtod(str, &endptr);
	return (*endptr == '\0');
}
