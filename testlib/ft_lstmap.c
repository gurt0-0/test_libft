/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:55:48 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:46:50 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew((f)(lst->content));
		lst = lst->next;
	}
	return (new);
}

// #include <stdio.h>
// int main()
// {
// 	return (0);
// }