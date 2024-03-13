/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:53:54 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/12 06:25:39 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_stdlib.h"
#include "ft_default.h"

/**
 * @brief Converts an integer to a null-terminated string representation.
 *
 * This function takes an integer `n` and converts it to a null-terminated
 * string representation. It allocates memory using `ft_calloc` to store the
 * converted string.
 * The function supports both positive and negative integers. Negative numbers
 * are prefixed with a '-'.
 *
 * @param n The integer to be converted.
 *
 * @return A pointer to the null-terminated string representation of the integer
 * on success, NULL on allocation failure. The caller is responsible for
 * freeing the returned memory.
 */
char	*ft_itoa(int n)
{
	long int	n_new;
	int			n_len;
	char		*str;

	n_new = n;
	n_len = ft_ilen(n_new);
	str = ft_calloc(n_len + NULL_BYTE, sizeof(char));
	if (!str)
		return (NULL);
	if (n_new < DEFAULT)
		n_new = -n_new;
	while (n_len > DEFAULT)
	{
		str[--n_len] = n_new % DECIMAL + '0';
		n_new /= DECIMAL;
	}
	if (n < DEFAULT)
		str[DEFAULT] = '-';
	return (str);
}
