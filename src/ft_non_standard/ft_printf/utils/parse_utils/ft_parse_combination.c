/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_combination.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:25:55 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 04:06:25 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_printf.h"
#include "ft_default.h"

static void					ft_parse_combination_aux(t_line *format, \
								t_line *line, const t_parse_comb_struct \
								*parse_comb, int comb_len);
static t_parse_comb_struct	ft_parse_comb_init(void);

void	ft_parse_combination(t_line *format, t_line *line)
{
	const t_parse_comb_struct	parse_comb = ft_parse_comb_init();
	int							comb_len;

	comb_len = INIT;
	if (ft_check_spec(format, DEFAULT) == ON)
		return ;
	ft_parse_combination_aux(format, line, &parse_comb, comb_len);
}

static void	ft_parse_combination_aux(t_line *format, t_line *line,
				const t_parse_comb_struct *parse_comb, int comb_len)
{
	while (++comb_len < COMB_SIZE && format->str)
	{
		if (parse_comb->comb[comb_len].check == OFF)
		{
			if (format->str->chr == parse_comb->comb[comb_len].chr)
			{
				ft_format_jump(format);
				parse_comb->comb[comb_len].comb_fn(format, line);
				break ;
			}
		}
		else if (parse_comb->comb[comb_len].check == ON)
		{
			if (format->str->chr <= parse_comb->comb[comb_len].chr)
			{
				parse_comb->comb[comb_len].comb_fn(format, line);
				break ;
			}
		}
	}
}

static t_parse_comb_struct	ft_parse_comb_init(void)
{
	return ((t_parse_comb_struct){.comb = {
			{'.', &ft_parse_precision, OFF},
			{'#', &ft_parse_hash, OFF},
			{' ', &ft_parse_space, OFF},
			{'+', &ft_parse_plus, OFF},
			{'-', &ft_parse_minus, OFF},
			{'0', &ft_parse_zero, OFF},
			{'9', &ft_parse_width, ON},
			{'\0', NULL, OFF}
		}});
}

void	ft_combination_add(t_line *line, char chr, int size)
{
	while (size-- > OFF)
		ft_chr_add(&line->str, ft_chr_new(chr));
}

void	ft_math_apply(t_line *line, t_lli prec,
				t_lli width, t_lli minus)
{
	line->prec = prec;
	line->width = width;
	line->minus = minus;
}
