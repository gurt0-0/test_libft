/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:31:06 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:46:30 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *n1 = ft_lstnew("42");
// 	t_list *n2 = ft_lstnew("is awesome!");
// 	t_list *tmp;

// 	ft_lstadd_front(&n1, n2);

// 	tmp = n1;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }