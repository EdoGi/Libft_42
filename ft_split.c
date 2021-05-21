/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 21:26:43 by marvin            #+#    #+#             */
/*   Updated: 2021/05/15 21:26:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int     ft_count(const char *s, char sep)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s[i] != 0)
    {
        if (s[i] != sep)
        {
            count++;
            while (s[i] && s[i] != sep)
                i++;
        }
        i++;
    }
    return (count);
}

int     ft_countlen(const char *s, int i, char sep)
{
    int len;

    len = 0;
    while (s[i] && s[i] != sep)
    {
        i++;
        len++;
    }
    return (len);
}

/*
char    **ft_split(char const *s, char c)
{
    char **splited;
    int i;
    int len;
    unsigned int start;
    int n;
    int count;
    printf("s is %s\n", s);
    printf("c is %c\n", c);

    count = ft_count(s, c);
//    printf("count is %d and strlen is %ld\n", count, ft_strlen(s));
    if (!(splited = (char **)malloc(sizeof(char *) * (count + 1))))
        return(NULL);
    splited[count + 1] = NULL;
    start = 0;
    n = 0;
    while (n < count)
    {
        len = 0;
        i = start - 1;
        while (s[++i] && s[i] != c)
            len++;
//        printf("n is %d & start is %d, len is %d\n", n + 1, start, len);
        if (len > 0)
            splited[n] = ft_substr(s, start, len);
        start = start + len;
        while (s[start] == c)
            start++;
        n++;
    }
    return (splited);
}
*/

char    **ft_split(char const *s, char c)
{
    char **splited;
    int count;
    int start;
    int len;
    int i;

    count = ft_count(s, c);
    splited = (char **)malloc(sizeof(char *) * count + 1);
    if (splited == NULL)
        return (NULL);
    start = -1;
    i = 0;
    while (s[++start])
    {
        len = 0;
        if (s[start] != c)
        {
            len = ft_countlen(s, start, c);    
            splited[i++] = ft_substr(s, start, len);
            start += len;
        }
    }
    splited[i] = 0;
    return (splited);
}