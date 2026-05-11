/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:04:49 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:48:59 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;

	i = 0;
	h = (char *)haystack;
	if (!*needle)
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while ((h[i + j] != '\0') && (needle[j] != '\0')
			&& (h[i + j] == needle[j]) && (i + j < len))
		{
			j++;
		}
		if (needle[j] == '\0')
			return (&h[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char *hay = "live love laugh 42!";
// 	char *ndl = "love";

// 	printf("%s\n", ft_strnstr(hay, ndl, 15));
// 	return (0);
// }