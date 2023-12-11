/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 04:50:00 by dande-je          #+#    #+#             */
/*   Updated: 2023/12/11 06:43:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../include/libft.h"

void	ft_cast_str(va_list ap, t_line *line, \
			t_line *format, int spec)
{
	char	*str;
	int		str_len;

	(void)spec;
	str = va_arg(ap, char *);
	if (!str)
	{
		ft_combination_str_math(line, str, 0);
		str = NULL_STR;
		str_len = ft_str_len((const char *)str);
	}
	else
	{
		str_len = ft_str_len((const char *)str);
		ft_combination_str_math(line, str, str_len);
	}
	ft_combination_head_str(line);
	if (*str && line->prec != FAIL)
		ft_str_add(str, line);
	ft_combination_tail_str(line);
	ft_format_jump(format);
}
