/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:08:33 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/23 00:39:55 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		s_len;
	char	*str;

	i = -1;
	s_len = ft_strlen(s);
	str = ft_calloc(s_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (++i < s_len)
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}
