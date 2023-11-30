/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:26:51 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/20 22:05:52 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_new;
	size_t	s1_len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_len = ft_strlen(s1) + 1;
	while (s1_len && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	s1_new = (char *) malloc((s1_len + 1) * sizeof(char));
	if (!s1_new)
		return (NULL);
	ft_strlcpy(s1_new, s1, s1_len + 1);
	return (s1_new);
}
