/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 06:22:06 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 08:01:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_get_next_line.h"

static char	*ft_read_buf(t_file_info *file);
static char	*ft_return_line(t_file_info *file);

/**
 * @brief This function receive an int that is a `fd` and return a string with
 * `\n` or NULL.
 *
 * @param fd The int of the file descriptor.
 * @return A string or a NULL.
 */
char	*get_next_line(int fd)
{
	static t_file_info	file;

	if ((!fd || fd < 0) && fd != 0)
		return (NULL);
	if (file.i >= file.read || file.i == 0)
	{
		file.i = 0;
		while (file.i < BUFFER_SIZE)
			file.buf[file.i++] = '\0';
		file.i = 0;
		file.len = 0;
		file.fd = fd;
		file.buf_hist = NULL;
		file.read = read(fd, file.buf, BUFFER_SIZE);
		if (file.read == FAIL)
			return (free_buf(file.buf_hist));
	}
	if (file.read <= 0 || file.buf[file.i] == '\0')
		return (free_buf(file.buf_hist));
	if (file.read < 0 && file.buf_hist)
		return (free_buf(file.buf_hist));
	return (ft_read_buf(&file));
}

/**
 * @brief This function receive a `static t_file_info` and read the buffer until
 * find the `\n` or `\0`.
 *
 * @param file The struct argument.
 * @return A string or a NULL.
 */
static char	*ft_read_buf(t_file_info *file)
{
	file->len = 0;
	while (file->read > 0)
	{
		ft_add_buf(&file->buf_hist, ft_buf_new(file->buf[file->i]));
		if (file->buf[file->i] == '\n' || file->buf[file->i] == '\0')
			break ;
		file->i++;
		file->len++;
		if (file->i >= file->read)
		{
			file->i = 0;
			file->read = read(file->fd, file->buf, BUFFER_SIZE);
			if (file->read == FAIL)
				return (free_buf(file->buf_hist));
		}
	}
	file->i++;
	file->len++;
	return (ft_return_line(file));
}

/**
 * @brief This function alloc with malloc(3) the string that will be return or
 * will return `NULL` if it is the end of the file.
 *
 * @param file The struct argument.
 * @return A string or a NULL.
 */
static char	*ft_return_line(t_file_info *file)
{
	t_buf_hist	*buf_hist_temp;
	char		*line;
	size_t		i;

	line = malloc(sizeof(char) * (file->len + NULL_BYTE));
	if (!(line || file->fd) && file->fd != 0)
	{
		free(line);
		return (NULL);
	}
	i = 0;
	buf_hist_temp = NULL;
	while (file->buf_hist)
	{
		buf_hist_temp = file->buf_hist->next;
		line[i++] = file->buf_hist->buf_char;
		free(file->buf_hist);
		file->buf_hist = buf_hist_temp;
	}
	line[i] = '\0';
	return (line);
}
