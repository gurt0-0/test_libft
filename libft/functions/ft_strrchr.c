/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:04:45 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/08 09:37:21 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "Forever 42!!";

// 	printf("%s\n" ,ft_strrchr(s, 'e'));
// 	printf("%s\n" ,ft_strrchr(s, 'F'));
// 	return (0);
// }
