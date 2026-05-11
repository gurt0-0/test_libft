/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:46:10 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/08 14:21:19 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *n1 = ft_lstnew("42");
// 	t_list *n2 = ft_lstnew("is awesome!");
// 	t_list *last;
// 	n1->next = n2;
// 	last = ft_lstlast(n1);

// 	printf("%s\n", (char *)last->content);
// 	return (0);
// }