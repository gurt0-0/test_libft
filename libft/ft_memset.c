/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:03:03 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:47:14 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;

	i = s;
	while (n-- > 0)
	{
		*i++ = (unsigned char)c;
	}
	return (s);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char s1[] = "live love laugh";
// 	char s2[] = "live love laugh";

// 	ft_memset(s1, '-', 4);
// 	memset(s2, '-', 4);

// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	return (0);
// }