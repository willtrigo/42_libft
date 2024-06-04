/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_chr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:33:53 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 04:00:43 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_printf.h"

void	ft_cast_chr(va_list ap, t_line *line, \
			t_line *format, int spec)
{
	const int	chr = va_arg(ap, int);

	(void)spec;
	ft_combination_head_chr(line);
	ft_chr_add(&line->str, ft_chr_new(chr));
	ft_combination_tail_chr(line);
	ft_format_jump(format);
}
