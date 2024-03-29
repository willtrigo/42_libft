/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 23:13:52 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/17 06:51:12 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_sprintf.h"
#include "ft_default.h"
#include <stdlib.h>

t_line	ft_line_init(void)
{
	return ((t_line){NULL, OFF, OFF, OFF, OFF, OFF, OFF, OFF, OFF});
}

void	ft_chr_add(t_line_chr **line_chr,
			t_line_chr *chr_new, t_line *line)
{
	t_line_chr	*line_temp;

	if (chr_new)
	{
		if (!*line_chr)
			*line_chr = chr_new;
		else
		{
			line_temp = *line_chr;
			while (line_temp->next)
				line_temp = line_temp->next;
			line_temp->next = chr_new;
		}
	}
	line->len++;
}

t_line_chr	*ft_chr_new(char chr)
{
	t_line_chr	*chr_new;

	chr_new = malloc(sizeof(t_line_chr));
	if (!chr_new)
	{
		free(chr_new);
		return (NULL);
	}
	chr_new->chr = chr;
	chr_new->next = NULL;
	return (chr_new);
}

void	ft_get_line(t_line *line, char **str)
{
	t_line_chr	*line_temp;
	size_t		i;

	*str = malloc(sizeof(char) * (line->len + NULL_BYTE));
	if (!*str)
	{
		free(*str);
		return ;
	}
	i = 0;
	line_temp = NULL;
	while (line->str)
	{
		line_temp = line->str->next;
		*(*(str) + i++) = line->str->chr;
		free(line->str);
		line->str = line_temp;
	}
	*(*(str) + i) = '\0';
}

void	ft_format_jump(t_line *format)
{
	t_line_chr	*format_temp;

	format_temp = format->str->next;
	free(format->str);
	format->str = format_temp;
}
