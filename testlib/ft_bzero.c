/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:04:27 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:45:51 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;

	if (!s)
		return ;
	i = s;
	while (n-- > 0)
	{
		*i++ = 0;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "Life Love 42!";

// 	printf("before : %s\n", str);
// 	ft_bzero(str, 10);
// 	printf("after : %s\n", str + 10);
// 	return (0);
// }