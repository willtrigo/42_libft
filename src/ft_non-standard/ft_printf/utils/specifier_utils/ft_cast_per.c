/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_per.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:37:36 by dande-je          #+#    #+#             */
/*   Updated: 2023/12/11 06:43:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../include/libft.h"

void	ft_cast_per(va_list ap, t_line *line, \
			t_line *format, int spec)
{
	(void)ap;
	(void)spec;
	ft_chr_add(&line->str, ft_chr_new('%'), line);
	ft_format_jump(format);
}
