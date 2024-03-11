/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:15 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 23:32:10 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Calculates the length of a null-terminated string.
 *
 * This function measures the length of the null-terminated string `s` by
 * counting the number of characters before the null terminator.
 *
 * @param s A pointer to the null-terminated string to measure.
 * @return The length of the string, excluding the null terminator.
 */
size_t	ft_strlen(const char *s)
{
	const char	*str;

	str = s;
	while (*str)
		str++;
	return (str - s);
}
