/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:05:52 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/08 11:42:51 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	while (n-- > 0)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char src[] = "42 is the best!";
// 	char s1[20];
// 	char s2[20];

// 	ft_memcpy(s1, src, 16);
// 	memcpy(s2, src, 16);

// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	return (0);
// }