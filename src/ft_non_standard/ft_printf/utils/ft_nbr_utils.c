/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 07:00:58 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 01:51:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_printf.h"
#include "ft_default.h"

int	ft_parse_nbr(t_line *format, int nbr)
{
	while (format->str->chr >= '0' && format->str->chr <= '9')
	{
		nbr = (nbr * DECIMAL) + (format->str->chr - '0');
		ft_format_jump(format);
	}
	return (nbr);
}

t_lli	ft_get_nbr_len(t_lli nbr)
{
	t_lli	nbr_i;

	nbr_i = INIT;
	if (nbr <= DEFAULT)
	{
		nbr_i++;
		nbr = -nbr;
	}
	while (nbr > INIT)
	{
		nbr_i++;
		nbr /= 10;
	}
	return (nbr_i);
}
