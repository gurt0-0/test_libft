/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:05:40 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:48:26 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "Forever 42!!";

// 	printf("%s\n" ,ft_strchr(s, '\0'));
// 	printf("%s\n" ,ft_strchr(s, 'F'));
// 	return (0);
// }
