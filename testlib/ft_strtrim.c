/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:51:40 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/12 17:51:45 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	excess(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	begin;
	size_t	finish;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	begin = 0;
	finish = (ft_strlen(s1));
	while (s1[begin] && excess(set, s1[begin]))
		begin++;
	i = 0;
	while (finish > begin && excess(set, s1[finish - 1]))
		finish--;
	if (!(str = (char *)malloc(sizeof(*s1) * (finish - begin + 1))))
		return (NULL);
	while (i < finish - begin)
	{
		str[i] = s1[begin + i];
		i++;
	}
	str[i] = 0;
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "111Je MOEDERRR!111";
// 	char *set = "1";
// 	char *trim_le_string = ft_strtrim(str, set);
// 	printf("the original version : %s\nthe trimmed version : %s\n", str, trim_le_string);
// 	free(trim_le_string);
// 	return (0);
// }