/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_hash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 08:56:56 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 04:10:02 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"
#include "ft_default.h"

void	ft_parse_hash(t_line *format, t_line *line)
{
	(void)format;
	line->hash = ON;
}
