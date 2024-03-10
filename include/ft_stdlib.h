/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:22:54 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/07 05:26:53 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>

enum e_ato
{
	MINUS = -1,
	ATO_DEFAULT = 0,
	ATO_INIT = 1,
	ATO_NULL = 0,
	ATO_DECIMAL = 10,
};

int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
double	ft_atof(const char *str);

#endif
