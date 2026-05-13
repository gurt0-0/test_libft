/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 19:43:54 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:46:34 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (!del)
		return ;
	(del)(lst->content);
	free(lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *n1 = ft_lstnew("42");
// 	t_list *n2 = ft_lstnew(" is equal to perfection");
// 	t_list *del;
// 	n1->next = n2;

// 	del = ft_lstdelone(n2, );
// 	printf("%s", (char *)del->content))
// }