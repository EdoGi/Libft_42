/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:57:52 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 22:57:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    const char *srcoct;
    char *dstoct;
    char tmp[n];
    size_t i;
 
    i = n;
    srcoct = (char *)src;
    dstoct = (char *)dest;
    while (i--)
    {
        tmp[i] = srcoct[i];
    }
    while (n--)
        dstoct[n] = tmp[n];
    return (dest);
}