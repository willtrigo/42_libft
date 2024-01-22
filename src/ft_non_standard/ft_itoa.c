/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:53:54 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 05:02:08 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard.h"

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument. Negative numbers must be handled.
 *
 * @param n The integer to convert.
 * @return The string representing the integer or NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	long int	n_new;
	int			n_len;
	char		*str;

	n_new = n;
	n_len = ft_ilen(n_new);
	str = ft_calloc(n_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n_new < 0)
		n_new = -n_new;
	while (n_len > 0)
	{
		str[--n_len] = n_new % 10 + '0';
		n_new /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

