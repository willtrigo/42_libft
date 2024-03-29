/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 05:12:34 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 04:09:47 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"
#include "ft_default.h"

void	ft_parse_space(t_line *format, t_line *line)
{
	line->space = ON;
	while (format->str)
	{
		if (format->str->chr == '%' || format->str->chr == 'd'
			|| format->str->chr == 'i' || format->str->chr == 's')
			break ;
		else if (format->str->chr == '0')
			ft_parse_zero(format, line);
		else if (format->str->chr >= '1' && format->str->chr <= '9')
			line->prec = ft_parse_nbr(format, INIT);
	}
}
