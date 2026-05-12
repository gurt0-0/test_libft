/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 20:03:33 by aiheins           #+#    #+#             */
/*   Updated: 2026/05/11 21:47:42 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int word_count(const char *s, char c)
{
    int i = 0;
    int count = 0;

    while (s[i])
    {
        while (s[i] == c)
            i++;

        if (s[i])
            count++;

        while (s[i] && s[i] != c)
            i++;
    }
    return count;
}

char **ft_split(const char *s, char c)
{
    char **split;
    int i = 0;
    int start;
    int end;
    int word = 0;

    split = malloc(sizeof(char *) * (word_count(s, c) + 1));
    if (!split)
        return NULL;

    while (s[i])
    {
        while (s[i] == c)
            i++;

        start = i;

        while (s[i] && s[i] != c)
            i++;

        end = i;

        if (end > start)
        {
            split[word] = malloc(end - start + 1);
            strncpy(split[word], s + start, end - start);
            split[word][end - start] = '\0';
            word++;
        }
    }

    split[word] = NULL;
    return split;
}

#include <stdio.h>
int main(void)
{
    char **arr = ft_split("live,love,laugh", ',');

    int i = 0;
    while (arr[i])
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
        i++;
    }

    free(arr);
}