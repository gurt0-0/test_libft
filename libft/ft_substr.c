/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:52:34 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/13 16:26:15 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!start || !len)
		return (ft_strdup(s));
	sub = (char *)malloc(sizeof (*s) * (len + 1));
	while (s[i] != '\0' && j < len)
	{
		if (i >= start)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

// int main()
// {
// 	char *str = "live, love, 42!";
// 	unsigned int i = 5;
// 	size_t l = 16;
// 	char *mem = ft_substr(str, i, l);

// 	printf("substring is: %s\n", mem);
// 	free(mem);
// 	mem = NULL;
// 	return(0);
// }