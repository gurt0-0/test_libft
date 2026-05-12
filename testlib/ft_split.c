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

size_t	ft_occ(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*sep;
	size_t	len;
	size_t	occ;
	size_t	i;

	if (!s)
		return (NULL);
	if (!c)
		return (ft_strdup(s));
	occ = ft_occ(s, c);
	len = ft_strlen(s);
	if (!(split = (char *)malloc(sizeof(s) * (len - occ + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		sep = (char *)malloc(sizeof(ft_sep(s, c)) * (i + 1));
		sep = *split;
		free(sep);
		i++;
	}
	split[i] = 0;
	return (split);
}

#include <stdio.h>
int main()
{
	char *str = "live, love, laugh, 42!,";
	char delimiter = ",";

	char *new = ft_split(str, delimiter);
	printf("new str = %s", new);
	free(new);
	return (0);
}

// find size inbetween the delimiter
// malloc mem
// str to malloc
// malloc to malloc
// loop and "\0"
