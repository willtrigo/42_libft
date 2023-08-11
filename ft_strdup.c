/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:13:07 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/11 06:13:59 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new_s;

	i = 0;
	new_s = malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	while (*s)
	{
		new_s[i++] = *s;
		s++;
	}
	new_s[i] = '\0';
	return (new_s);
}
