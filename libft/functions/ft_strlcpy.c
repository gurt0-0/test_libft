/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:05:11 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/08 10:16:30 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// // #include <bsd/string.h>
// int main()
// {
// 	char dst1[] = "live love laugh";
// 	// char dst2[] = "live love laugh";
// 	size_t result = ft_strlcpy(dst1, "42!", 25);
// 	// size_t test = strlcpy(dst2, "42!", 25);

// 	printf("%zu\n", result);
// 	// printf("%zu\n", test);
// 	return (0);
// }