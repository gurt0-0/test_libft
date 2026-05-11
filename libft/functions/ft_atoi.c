/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:06:13 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/04 17:17:45 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str == 32 || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-')
	{
		sign = -1 * sign;
		str++;
	}
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += (*str - '0');
		str++;
	}
	return (n * sign);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "-----+1234\n42";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }