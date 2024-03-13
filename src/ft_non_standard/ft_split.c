/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:35:23 by dande-je          #+#    #+#             */
/*   Updated: 2024/03/12 23:17:09 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_non_standard/ft_non_standard.h"
#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_default.h"

static void		ft_make_split(char const *s, char c, size_t i, char **split);
static size_t	ft_count_words(char const *s, char c);

/**
 * @brief Splits a string into an array of null-terminated substrings, based on
 * a delimiter character.
 *
 * This function takes a null-terminated string `s` and a delimiter character
 * `c` as input. It splits the string `s` into an array of null-terminated
 * substrings, where each substring doesn't contain the delimiter character `c`.
 * The function first counts the number of words (substrings) using
 * `ft_count_words`. Then, it allocates memory for the array of strings using
 * `ft_calloc`. Finally, it calls `ft_make_split` to perform the actual
 * splitting and populate the allocated array.
 *
 * @param s The null-terminated string to be split.
 * @param c The delimiter character used for splitting.
 *
 * @return On success, a pointer to an array of null-terminated substrings. On
 * failure (including an empty input string), NULL is returned. The caller is
 * responsible for freeing the returned memory using free(array).
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
	ft_make_split(s, c, DEFAULT, s_split);
	return (s_split);
}

/**
 * @brief Internal helper function: Splits a string into substrings and
 * populates an array.
 *
 * This function takes a null-terminated string `s`, a delimiter character `c`,
 * an index `i`, and an array of character pointers `split` as input. It
 * iterates through the string `s` and populates the `split` array with
 * null-terminated substrings that do not contain the delimiter `c`.
 * The function starts by finding the beginning of a substring (excluding
 * delimiters). Then, it calculates the length of the substring and allocates
 * memory using `malloc`. It copies the substring to the allocated memory using
 * `ft_strlcpy`. Finally, it adds the pointer to the newly created substring to
 * the `split` array and increments the pointer to move to the next element.
 *
 * @param s The null-terminated string to be split.
 * @param c The delimiter character used for splitting.
 * @param i An index tracking position within the string `s`.
 * @param split An array of character pointers to be populated with substrings.
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
			str_len = (i - s_start) + NULL_BYTE;
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
 * @brief Internal helper function: Counts the number of words in a string
 * separated by a delimiter.
 *
 * This function takes a null-terminated string `s` and a delimiter character
 * `c` as input. It iterates through the string `s` and counts the number of
 * words (substrings) that do not contain the delimiter `c`.
 * The function starts with a counter `words` initialized to 0. It iterates
 * through the string. If a non-delimiter character is encountered, it keeps
 * iterating until another delimiter or the end of the string is reached,
 * incrementing the `words` counter for each such sequence.
 *
 * @param s The null-terminated string to be examined.
 * @param c The delimiter character used for separating words.
 *
 * @return The number of words (substrings) found in the string `s` that are
 * separated by the delimiter `c`.
 */
static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;

	words = DEFAULT;
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
	return (words + NULL_BYTE);
}
