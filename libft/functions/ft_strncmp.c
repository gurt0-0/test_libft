/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:04:54 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/08 09:49:35 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "live love laugh 42!";
// 	char *s2 = "live love laugh 42!";

// 	printf("%d\n", ft_strncmp(s1, s2, 15));
// 	return (0);
// }