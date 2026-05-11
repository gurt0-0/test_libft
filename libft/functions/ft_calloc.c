/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:51:14 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/08 09:20:16 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	int *test = ft_calloc(5, sizeof(int));

// 	while (i < 5)
// 	{
// 		printf("%d", test[i]);
// 		i++;
// 	}
// 	free (test);
// 	return (0);
// }