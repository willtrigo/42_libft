/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 03:05:33 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/19 06:50:59 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr_new;
	size_t	calloc_len;

	ptr_new = NULL;
	calloc_len = nmemb * size;
	if (!nmemb || !size || !(nmemb != calloc_len / size))
		ptr_new = malloc(calloc_len);
	if (ptr_new)
		ft_bzero(ptr_new, calloc_len);
	return (ptr_new);
}
