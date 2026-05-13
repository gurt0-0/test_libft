/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:05:47 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/13 17:04:16 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char s1[20] = "42 is the best!";
// 	char s2[20] = "42 is the best!";

// 	memmove(s1 + 2, s1, 15);
// 	ft_memmove(s2 + 2, s2, 15);

// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	return (0);
// }