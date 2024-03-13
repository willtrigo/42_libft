/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_default.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 01:16:00 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 01:43:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFAULT_H
# define FT_DEFAULT_H

enum e_default
{
	DEFAULT = 0,
	DEFAULT_BEGIN = 1,
	INIT = -1,
	NULL_BYTE = 1,
	CHAR_BYTE = 1,
	FAIL = -1,
	OFF = 0,
	ON = 1,
};

enum e_ascii
{
	NUL = 0,
	DEL = 127,
};

enum e_math
{
	MINUS = -1,
	DECIMAL = 10,
	ZERO = 0,
};

#endif
