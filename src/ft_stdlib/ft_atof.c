/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:29:38 by dande-je          #+#    #+#             */
/*   Updated: 2023/12/22 16:40:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
