/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:01:13 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/12 20:23:12 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void	test(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 97 && *c <= 122)
// 		*c -= 32;
// }

// #include <stdio.h>
// int main()
// {
// 	char s[] = "hello..";
	
// 	printf("old : %s\n", s);
// 	ft_striteri(s, test);
// 	printf("new : %s\n", s);
// 	return (0);
// }