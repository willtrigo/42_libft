/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination_chr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 03:10:48 by dande-je          #+#    #+#             */
/*   Updated: 2023/12/11 06:43:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../../include/libft.h"

void	ft_combination_head_chr(t_line *line)
{
	if (line->width >= ON && line->minus == OFF)
		while ((line->width-- - BYTE) > OFF)
			ft_chr_add(&line->str, ft_chr_new(' '), line);
}

void	ft_combination_tail_chr(t_line *line)
{
	if (line->minus >= ON)
		while ((line->minus-- - BYTE) > OFF)
			ft_chr_add(&line->str, ft_chr_new(' '), line);
}
