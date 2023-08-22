/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:53:54 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/22 19:33:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_intlen(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	n_new;
	int			n_len;
	char		*str;

	n_new = n;
	n_len = ft_intlen(n_new);
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
