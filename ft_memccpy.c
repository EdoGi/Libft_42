/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:50:43 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 22:50:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    const char *srcoct;
    char *dstoct;

    srcoct = (char *)src;
    dstoct = (char *)dest;
    while (n--)
    {
        if ((*dstoct++ = *srcoct++) == (unsigned char)c)
            return (dstoct);
    }
    return (NULL);
}