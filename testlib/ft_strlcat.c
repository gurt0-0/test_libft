/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:05:35 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:48:39 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
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
	return (ft_strlen(src) + ft_strlen(dst));
}

// #include <stdio.h>
// int main()
// {
// 	char *dest = "42 is life!";
// 	char *src = "42 is life!";
// 	size_t size = 6;

// 	printf("%s", ft_strlcat(dest, src, size));
// 	return (0);
// }