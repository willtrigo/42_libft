/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:29:38 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/21 23:03:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief Converts the initial portion of the string pointed to by `str` to
 * double representation.
 *
 * @param str The string to be converted.
 * @return The converted double or 0 on error.
 */
double	ft_atof(const char *str)
{
	double	nb;
	int		decimal;
	int		sign;

	nb = 0;
	sign = 1;
	decimal = 1;
	if (str == NULL)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (ft_isdigit(*str))
		nb = (nb * 10) + (*str++ - '0');
	if (*str == '.')
		str++;
	while (ft_isdigit(*str))
	{
		nb = (nb * 10) + (*str++ - '0');
		decimal = decimal * 10;
	}
	return (nb / decimal * sign);
}
