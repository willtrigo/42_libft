/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination_int_math_zero.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:15:37 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 02:04:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_printf.h"
#include "ft_default.h"

static void	ft_int_math_zero_aux(t_line *line, t_lli nbr,
				t_combination_history *hist);

void	ft_int_math_zero(t_line *line, t_lli nbr, \
			t_combination_history *hist)
{
	if (((nbr < 0) || (hist->len == CHAR_BYTE)) && ((hist->width == CHAR_BYTE) \
		&& (hist->prec == CHAR_BYTE)))
	{
		ft_math_apply(line, OFF, OFF, line->minus);
		return ;
	}
	if ((hist->width < hist->len) && (hist->prec > hist->len))
	{
		ft_math_apply(line, line->prec - hist->len, OFF, line->minus);
		if (nbr < 0)
			ft_math_apply(line, ++line->prec, line->width, line->minus);
	}
	ft_int_math_zero_aux(line, nbr, hist);
}

static void	ft_int_math_zero_aux(t_line *line, t_lli nbr,
				t_combination_history *hist)
{
	if ((hist->width == hist->len) && (hist->prec > hist->len))
	{
		ft_math_apply(line, line->prec - hist->len, OFF, line->minus);
		if (nbr < 0)
			ft_math_apply(line, line->prec - hist->len \
				- CHAR_BYTE, OFF, line->minus);
	}
	else if (hist->width == hist->len)
		ft_math_apply(line, line->prec, OFF, line->minus);
	else if (hist->width == hist->prec)
	{
		ft_math_apply(line, line->prec - hist->len, line->width \
			- hist->len, line->minus);
		if (nbr < 0)
			ft_math_apply(line, ++line->prec, line->width, line->minus);
	}
	else if ((hist->width > hist->len) && (hist->prec == OFF))
		ft_math_apply(line, hist->width - hist->len, OFF, line->minus);
}
