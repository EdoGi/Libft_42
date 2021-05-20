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
    while (s[i])
    {
        if (s[i] != sep)
        {
            count++;
            while (s[i] && s[i] != sep)
                i++;
            printf("count is %d and i is %d so '%c'   \n", count, i, s[i]);
        }
        i++;
    }
    return (count);
}

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