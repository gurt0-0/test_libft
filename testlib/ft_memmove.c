/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:05:47 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:47:10 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	if (d < s)
	{
		while (n-- > 0)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		j = n;
		while (j > 0)
		{
			j--;
			d[j] = s[j];
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char s1[] = "42 is the best!";
// 	char s2[] = "42 is the best!";

// 	memmove(s1 + 3, s1, 8);
// 	ft_memmove(s2 + 3, s2, 8);

// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	return (0);
// }