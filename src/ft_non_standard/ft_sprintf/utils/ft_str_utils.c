/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 07:09:05 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 04:07:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"
#include "ft_default.h"

void	ft_str_add(char *str, t_line *line)
{
	if (line->prec >= ON)
	{
		while (line->prec--)
			if (*str)
				ft_chr_add(&line->str, ft_chr_new(*(str++)), line);
	}
	else
		while (*str)
			ft_chr_add(&line->str, ft_chr_new(*(str++)), line);
}

int	ft_str_len(const char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}
