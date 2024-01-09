/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:25:23 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/09 09:55:35 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../include/libft.h"

void	ft_parse_zero(t_line *format, t_line *line)
{
	format_next = format->str->next;
	line->zero = ON;
	while (format->str->chr == '0')
		ft_format_jump(format);
	if (ft_check_spec(format, DEFAULT_INIT) == ON)
		return ;
	while (format->str)
	{
		if (ft_check_spec(format, DEFAULT_INIT) == ON)
			break ;
		if (format->str->chr == '.')
			ft_parse_precision(format, line);
		if (format->str->chr == '-')
			ft_parse_minus(format, line);
		if (format->str->chr >= '1' && format->str->chr <= '9')
			ft_parse_width(format, line);
	}
}
