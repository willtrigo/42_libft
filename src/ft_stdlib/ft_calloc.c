/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 03:05:33 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/21 23:06:47 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief Allocates memory for an array of `nmemb` elements of `size` bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 *
 * If `nmemb` or `size` is 0, then returns a unique pointer value that can later
 * be successfully passed to free().
 *
 * @warning If the multiplication of `nmemb` and `size` would result in integer
 * overflow, then returns an error.
 *
 * @param nmemb The number of elements to allocate.
 * @param size The size of each element.
 * @return A pointer to the allocated memory. NULL if an error ocurred.
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
