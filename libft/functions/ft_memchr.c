/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:06:07 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 19:30:32 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (n-- > 0)
	{
		if (*(unsigned char *)(s + i) == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char s1[] = "42 is the best!";
// 	char s2[] = "42 is the best!";

// 	char *r1 = ft_memchr(s1, 't', 16);
// 	char *r2 = memchr(s2, 't', 16);

// 	printf("%s\n", r1);
// 	printf("%s\n", r2);
// 	return (0);
// }