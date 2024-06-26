/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 02:14:19 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 04:02:02 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_printf.h"
#include "ft_default.h"

static void	ft_int_add(t_lli nbr, t_line *line);
static void	ft_combination_int_add(t_line *line, t_lli nbr);

void	ft_cast_int(va_list ap, t_line *line, \
			t_line *format, int spec)
{
	int		nbr;
	t_ui	unbr;

	nbr = 0;
	unbr = 0;
	if (spec == CHK_INT_D_I)
	{
		nbr = va_arg(ap, int);
		ft_combination_int_math(line, (t_lli)nbr);
		ft_combination_int_add(line, (t_lli)nbr);
	}
	else
	{
		unbr = va_arg(ap, t_ui);
		ft_combination_int_math(line, (t_lli)unbr);
		ft_combination_int_add(line, (t_lli)unbr);
	}
	ft_format_jump(format);
}

static void	ft_combination_int_add(t_line *line, t_lli nbr)
{
	ft_combination_head_int(line, nbr);
	if (!(nbr == 0))
		ft_int_add(nbr, line);
	else if ((nbr == 0) && ((line->width == OFF) && (line->minus == OFF) \
		&& (line->zero == OFF) && (line->prec == OFF)))
		ft_int_add(nbr, line);
	ft_combination_tail_int(line);
}

static void	ft_int_add(t_lli nbr, t_line *line)
{
	t_lli	nbr_new;

	nbr_new = nbr;
	if (nbr == 0)
		ft_chr_add(&line->str, ft_chr_new('0'));
	else
	{
		if (!nbr)
			ft_str_add(NULL_STR, line);
		else
		{
			if (nbr_new < 0)
				nbr_new *= -1;
			if (nbr_new > 9)
				ft_int_add(nbr_new / 10, line);
			ft_chr_add(&line->str, ft_chr_new(nbr_new % 10 + '0'));
		}
	}
}
