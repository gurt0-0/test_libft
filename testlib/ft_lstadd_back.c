/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:17:27 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:53:03 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (!lst)
		*lst = new;
	else
	{
		back = ft_lstlast(*lst);
		back->next = new;
	}
}

// #include <stdio.h>
// int main()
// {
// 	t_list *n1 = ft_lstnew("42");
// 	t_list *n2 = ft_lstnew("is awesome!");
// 	t_list *tmp;

// 	ft_lstadd_back(&n1, n2);

// 	tmp = n1;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("%d", ft_lstsize(n1));
// 	return (0);
// }