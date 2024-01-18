/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:22:54 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/18 08:50:46 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>
# include "ft_string.h"
# include "ft_ctype.h"

int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
double	ft_atof(const char *str);

#endif
