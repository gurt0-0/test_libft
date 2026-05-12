/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 20:03:33 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:47:42 by aiheins          ###   ########.fr       */
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
	size_t	start;
	size_t	finish;
	size_t	i;
	size_t count;

	count = 0;
	if (!s)
		return (NULL);
	// if (!c)
	// 	return (ft_strdup(s));
	split = malloc(sizeof(char *) * (word_occ(s, c) + 1));
	if (!split)
		return NULL;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		finish = i;
		if (finish > start)
		{
			split[count] = malloc(finish - start + 1);
			ft_strlcpy(split[count], s + start, finish - start + 1);
			split[count][finish - start] = '\0';
			count++;
		}
	}
	split[count] = 0;
	return (split);
}

#include <stdio.h>
int main()
{
	char **arr = ft_split("live,love,laugh", ',');

	int i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
