/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:52:25 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 22:52:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    const char *srcoct;
    size_t i;

    srcoct = (char *)s;
    i = -1;
    while (++i <= n)
    {
        if (srcoct[i] == (unsigned char)c)
            return ((char *)&srcoct[i]);
    }
    return (NULL);
}