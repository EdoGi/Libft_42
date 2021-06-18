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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;

	dlen = ft_strlen(dst);
	i = 0;
	j = dlen;
	if (!dstsize || dstsize < dlen)
		return (dstsize + ft_strlen(src));
	while (src[i] && j < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (dlen + ft_strlen(src));
}
