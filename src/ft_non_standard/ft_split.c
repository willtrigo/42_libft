/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:35:23 by dande-je          #+#    #+#             */
/*   Updated: 2024/01/22 07:46:12 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"

static void		ft_make_split(char const *s, char c, size_t i, char **split);
static size_t	ft_count_words(char const *s, char c);

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must end with
 * a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split or NULL if the
 * allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	size_t	nodes;
	char	**s_split;

	if (!s)
		return (NULL);
	nodes = ft_count_words(s, c);
	s_split = ft_calloc((nodes), sizeof(char *));
	if (!s_split)
		return (NULL);
	ft_make_split(s, c, 0, s_split);
	return (s_split);
}

/**
 * @brief This function receive four arguments for make the split, This
 * function malloc(3) each word and put in the array that i be returned in the
 * .ft_split.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @param i The index.
 * @param split The array.
 */
static void	ft_make_split(char const *s, char c, size_t i, char **split)
{
	char	*str;
	size_t	s_start;
	size_t	str_len;

	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			s_start = i;
			while (s[i] && s[i] != c)
				i++;
			str_len = (i - s_start) + BYTE;
			str = malloc(sizeof(char) * str_len);
			ft_strlcpy(str, &s[s_start], str_len);
			*(char **)(split++) = str;
		}
		if (s[i] && s[i] == c)
			while (s[i] && s[i] == c)
				i++;
	}
	split = NULL;
}

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must end with
 * a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The count of the number of words that have in the `s`, split by the
 * delimiter `c`.
 */
static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			words++;
		}
		if (*s && *s == c)
			while (*s && *s == c)
				s++;
	}
	return (words + 1);
}
