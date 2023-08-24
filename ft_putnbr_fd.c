/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 04:53:30 by dande-je          #+#    #+#             */
/*   Updated: 2023/08/23 05:12:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_new;

	n_new = n;
	if (n_new < 0)
	{
		n_new *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n_new / 10 > 0)
		ft_putnbr_fd(n_new / 10, fd);
	ft_putchar_fd(n_new % (10 + '0'), fd);
}
