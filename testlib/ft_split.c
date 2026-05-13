/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 20:03:33 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/12 18:59:45 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	word_occ(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len > 0)
		{
			split[i] = malloc(len +1);
			ft_strlcpy(split[i++], s, len + 1);
		}
	}
	while (--i >= 0)
		free(split[i]);
	free(split);
	return (split);
}

// #include <stdio.h>
// int main()
// {
// 	char **arr = ft_split("live,love,laugh", ',');

// 	int i = 0;
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }

// find size inbetween the delimiter
// malloc mem
// str to malloc
// malloc to malloc
// loop and "\0"
