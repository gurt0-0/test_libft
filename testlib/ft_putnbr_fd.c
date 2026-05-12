/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:54:41 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/12 20:48:39 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		{
			write(fd, "-2147483648", 12);
			return ;
		}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write (fd, &c, 1);
}

// int	main()
// {
// 	int numb = -42;
// 	ft_putnbr_fd(numb, 1);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd(42, 1);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	write (1, "\n", 1);
// 	return (0);
// }