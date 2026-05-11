/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:30:58 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 19:24:06 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	test(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 97 && c <= 122)
// 		return(c - 32);
// 	return(c);
// }

// #include <stdio.h>
// int main()
// {
// 	char *s = "hello..";
// 	char *result = ft_strmapi(s, test);

// 	if (result)
// 	{
// 		printf("old : %s\nnew : %s", s, result);
// 		free(result);
// 	}
// 	return (0);
// }