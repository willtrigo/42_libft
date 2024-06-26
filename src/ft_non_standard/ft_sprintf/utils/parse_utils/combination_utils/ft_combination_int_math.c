/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination_int_math.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:01:56 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 04:17:25 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"
#include "ft_default.h"

static void	ft_combination_int_math_aux(t_line *line, t_lli nbr,
				t_combination_history *hist);
static void	ft_combination_int_math_aux_1(t_line *line, t_lli nbr,
				t_combination_history *hist);
static void	ft_combination_int_math_0(t_line *line);
static void	ft_combination_int_math_0_aux(t_line *line);

void	ft_combination_int_math(t_line *line, t_lli nbr)
{
	t_combination_history	hist;

	hist.len = ft_get_nbr_len(nbr);
	hist.prec = line->prec;
	hist.width = line->width;
	hist.minus = line->minus;
	ft_combination_int_math_aux(line, nbr, &hist);
}

static void	ft_combination_int_math_aux(t_line *line, t_lli nbr,
			t_combination_history *hist)
{
	if (nbr == 0)
	{
		if (line->prec != FAIL)
		{
			if ((line->prec >= ON) && ((line->prec > line->minus) \
					&& (line->prec > line->width)))
				ft_math_apply(line, line->prec, OFF, OFF);
			else
				ft_combination_int_math_0(line);
		}
		return ;
	}
	if (line->prec == FAIL)
	{
		if (nbr < 0)
			line->zero = ON;
		ft_math_apply(line, FAIL, line->width - hist->len, \
				line->minus - hist->len);
		return ;
	}
	if (line->zero == ON)
		ft_int_math_zero(line, nbr, hist);
	ft_combination_int_math_aux_1(line, nbr, hist);
}

static void	ft_combination_int_math_aux_1(t_line *line, t_lli nbr,
			t_combination_history *hist)
{
	if (line->minus == FAIL)
		ft_math_apply(line, line->prec - hist->len \
		+ CHAR_BYTE + CHAR_BYTE, line->width, line->minus);
	if (line->minus >= ON)
		ft_int_math_minus(line, nbr, hist);
	if (line->width >= ON)
		ft_int_math_width(line, nbr, hist);
	if ((hist->prec >= ON) && ((line->zero == OFF) && (hist->width == OFF) \
		&& (hist->minus == OFF)))
	{
		ft_math_apply(line, line->prec - hist->len, line->width, \
			line->minus);
		if (nbr < 0)
		{
			ft_math_apply(line, ++line->prec, line->width, line->minus);
			line->zero = ON;
		}
	}
}

static void	ft_combination_int_math_0(t_line *line)
{
	if (line->zero == ON)
	{
		if (line->minus >= ON)
			ft_math_apply(line, line->minus, OFF, OFF);
		else if (line->width >= ON)
		{
			if (line->prec == OFF)
				line->prec = line->width;
			ft_math_apply(line, line->prec, line->width \
				- line->prec, OFF);
			return ;
		}
		if ((line->prec == OFF) && (line->minus == OFF) && (line->width == OFF))
			ft_math_apply(line, ON, OFF, OFF);
	}
	ft_combination_int_math_0_aux(line);
}

static void	ft_combination_int_math_0_aux(t_line *line)
{
	if (line->zero == FLAG_ZERO)
	{
		if (line->minus >= ON)
			ft_math_apply(line, FAIL, OFF, line->minus);
		else if (line->width >= ON)
			ft_math_apply(line, FAIL, line->width, OFF);
	}
	else if (line->minus >= ON)
	{
		if (line->prec >= ON)
			line->minus -= line->prec;
		else
			ft_math_apply(line, ON, OFF, --line->minus);
	}
	else if (line->width >= ON)
	{
		if (line->prec >= ON)
			line->width -= line->prec;
		else
			ft_math_apply(line, ON, --line->width, OFF);
	}
}
