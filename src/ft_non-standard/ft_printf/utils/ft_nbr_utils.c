/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 07:00:58 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/09 09:56:56 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/libft.h"

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

void	ft_print_line(t_line *line)
{
	t_line_chr		*line_temp;
	char			*line_new;
	size_t			i;

	line_new = malloc(sizeof(char) * (line->len + BYTE));
	if (!line_new)
	{
		free(line_new);
		return ;
	}
	i = 0;
	line_temp = NULL;
	while (line->str)
	{
		line_temp = line->str->next;
		line_new[i++] = line->str->chr;
		free(line->str);
		line->str = line_temp;
	}
	line_new[i] = '\0';
	write(STDOUT_FILENO, line_new, line->len);
	free(line_new);
}

void	ft_format_jump(t_line *format)
{
	t_line_chr	*format_temp;

	format_temp = format->str->next;
	free(format->str);
	format->str = format_temp;
}
