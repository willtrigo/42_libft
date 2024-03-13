/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 00:45:26 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/13 00:27:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_default.h"

/**
 * @brief Applies a function to each character of a string with its index.
 *
 * This function takes a null-terminated string `s` and a pointer to a function
 * `f` as input. The function `f` takes two arguments: an unsigned integer
 * `index` and a character pointer `c`.
 * `ft_striteri` iterates over each character of the string `s` (excluding the
 * null terminator) and calls the function `f` for each character. The function
 * `f` receives the current character's index (starting from 0) and a pointer
 * to the character itself.
 *
 * @param s The null-terminated string to be processed.
 * @param f A pointer to a function that takes an unsigned integer index and a
 * character pointer as arguments. This function will be applied to each
 * character of the string.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = INIT;
	while (s[++i])
		f(i, &s[i]);
}
