/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_per.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:37:36 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 04:09:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"

void	ft_cast_per(va_list ap, t_line *line, \
			t_line *format, int spec)
{
	(void)ap;
	(void)spec;
	ft_chr_add(&line->str, ft_chr_new('%'), line);
	ft_format_jump(format);
}
