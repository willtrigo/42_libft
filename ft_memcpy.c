/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 00:13:40 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/23 01:51:57 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long int	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	while (++i < (long int)n)
		*(char *)(dest + i) = *(char *)(src + i);
	return (dest);
}
