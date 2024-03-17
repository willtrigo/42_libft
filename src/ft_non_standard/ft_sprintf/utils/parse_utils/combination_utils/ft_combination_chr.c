/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination_chr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 03:10:48 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 04:10:11 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"
#include "ft_default.h"

void	ft_combination_head_chr(t_line *line)
{
	if (line->width >= ON && line->minus == OFF)
		while ((line->width-- - CHAR_BYTE) > OFF)
			ft_chr_add(&line->str, ft_chr_new(' '), line);
}

void	ft_combination_tail_chr(t_line *line)
{
	if (line->minus >= ON)
		while ((line->minus-- - CHAR_BYTE) > OFF)
			ft_chr_add(&line->str, ft_chr_new(' '), line);
}
