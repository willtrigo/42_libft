/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:06:12 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/17 21:24:35 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == '\0')
		return (NULL);
	while (n--)
	{
		if (*(char *)s == (char)c)
		{
			return ((char *)s);
			break ;
		}
		s++;
	}
	return (NULL);
}
