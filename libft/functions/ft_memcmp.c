/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:06:01 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 19:29:05 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*i;
	const unsigned char	*j;

	i = s1;
	j = s2;
	while (n-- > 0)
	{
		if (*i != *j)
			return (*i - *j);
		i++;
		j++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char s1[20] = "life love laugh 42";
// 	char s2[20] = "life love laugh 42!";

// 	int r1 = ft_memcmp(s1, s2, 20);
// 	int r2 = memcmp(s1, s2, 20);

// 	printf("%d\n", r1);
// 	printf("%d\n", r2);
// 	return (0);
// }