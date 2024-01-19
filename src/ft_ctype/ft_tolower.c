/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:10:58 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/19 06:54:21 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * If `c` is an uppercase letter, returns its lowercase equivalent, if a
 * lowercase representation exists in the current locale. Otherwise, returns
 * `c`.
 *
 * @param c The character to be converted.
 * @return The converted letter, or `c` if the conversion was not possible.
 */
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}
