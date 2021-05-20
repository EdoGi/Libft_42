/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:09:43 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 23:09:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i;
    int j;

    j = ft_strlen(dst);
    i = 0;
    if (!dstsize)
        return(j);
    while(src[i] && i < dstsize)
    {
        dst[j++] = src[i++];
    }
    dst[j] = 0;
    return (j);
}