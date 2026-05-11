/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:13:44 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:46:22 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_length(int num, int max)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0 && max == 10)
		len += 1;
	while (num)
	{
		num /= max;
		len += 1;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	pos;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_length(n, 10);
	pos = len - 1;
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[pos] = (n % 10) + '0';
		n /= 10;
		pos--;
	}
	str[len] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *result = ft_itoa(12345678);

// 	printf("%s\n", result);
// 	free (result);
// 	return (0);
// }
