/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:42:59 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 04:08:06 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_printf.h"
#include "ft_default.h"

void	ft_combination_head_int(t_line *line, t_lli nbr)
{
	if (line->space == ON && nbr >= 0 && line->plus == OFF)
		ft_chr_add(&line->str, ft_chr_new(' '));
	else if (nbr >= 0 && line->plus == ON)
		ft_chr_add(&line->str, ft_chr_new('+'));
	if (line->width >= ON)
		ft_combination_add(line, ' ', line->width);
	if (nbr < 0)
	{
		if (line->minus == FAIL)
		{
			ft_chr_add(&line->str, ft_chr_new('-'));
			line->prec--;
		}
		if (line->zero == ON)
			ft_chr_add(&line->str, ft_chr_new('-'));
		else if ((line->width == OFF) && (line->prec == OFF)
			&& (line->minus == OFF))
			ft_chr_add(&line->str, ft_chr_new('-'));
	}
	if (line->prec >= ON)
		ft_combination_add(line, '0', line->prec);
}

void	ft_combination_tail_int(t_line *line)
{
	if (line->minus >= ON)
		ft_combination_add(line, ' ', line->minus);
}
