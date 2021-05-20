/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:05:35 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 23:05:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *source)
{
    char *dup;
    int i;
    int len;

    len = 0;
    i = -1;
    while (source[++i])
        len++;
    if (!(dup = (char *)malloc(len * sizeof(char))))
        return (NULL);
    i = -1;
    while (source[++i])
        dup[i] = source[i];
    dup[i] = '\0';
    return (dup);
}