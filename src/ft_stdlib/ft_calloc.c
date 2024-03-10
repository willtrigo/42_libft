/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 03:05:33 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/10 04:57:59 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/**
 * @brief Allocates memory and initializes it to zero.
 *
 * This function allocates memory for `nmemb` elements of size `size` and
 * initializes all bytes of the allocated memory to zero.
 *
 * @param nmemb The number of elements to allocate.
 * @param size The size of each element in bytes.
 *
 * @return A pointer to the allocated memory initialized to zero, or NULL if an
 * error occurs.
 */
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
