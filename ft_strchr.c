/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:00:37 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 23:00:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    char *str;

    i = -1;
    if (s == NULL)
        return (NULL);
    while (s[++i])
    {
        if (s[i] == c)
            return (str = (char *)&s[i]);
    }
    return (NULL);
}
