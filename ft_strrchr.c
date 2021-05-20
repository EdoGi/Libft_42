/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 21:42:14 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 21:42:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    if (s == NULL)
        return (NULL);
    while (--i >= 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
    }
    return (NULL);
}