/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:13:44 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/13 18:55:44 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	ft_length(int nbr)
{
	size_t	len;

	len = (nbr <= 0);
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_length(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *r1 = ft_itoa(-2147483648);
// 	char *r2 = ft_itoa(12345678);
// 	char *r3 = ft_itoa(42);

// 	printf("%s\n", r1);
// 	free (r1);
// 	printf("%s\n", r2);
// 	free (r2);
// 	printf("%s\n", r3);
// 	free (r3);
// 	return (0);
// }
