/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:52:48 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/19 07:01:27 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for white-space characters.
 *
 * In the "C" and "POSIX" locales, these are: space, form-feed ('\f'), newline
 * ('\n'), carriage return ('\r'), horizontal tab ('\t'), and vertical tab
 * ('\v').
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is a white-space character, zero
 * otherwise.
 */
int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}
