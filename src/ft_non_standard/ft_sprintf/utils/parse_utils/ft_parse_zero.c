/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:25:23 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 04:09:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"
#include "ft_default.h"

void	ft_parse_zero(t_line *format, t_line *line)
{
	line->zero = ON;
	while (format->str->chr == '0')
		ft_format_jump(format);
	if (ft_check_spec(format, INIT) == ON)
		return ;
	while (format->str)
	{
		if (ft_check_spec(format, INIT) == ON)
			break ;
		if (format->str->chr == '.')
			ft_parse_precision(format, line);
		if (format->str->chr == '-')
			ft_parse_minus(format, line);
		if (format->str->chr >= '1' && format->str->chr <= '9')
			ft_parse_width(format, line);
	}
}
