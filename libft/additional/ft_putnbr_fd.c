/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:54:41 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 19:23:23 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

char	num(int n)
{
	char	c;

	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n > 9)
		num(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, num(n), 1);
}

// int	main()
// {
// 	int numb = -42;
// 	ft_putnbr_fd(numb, 1);
// 	return (0);
// }