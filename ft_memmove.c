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
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*srcoct;
	unsigned char	*dstoct;
	size_t		i;

	if (!dst && !src)
		return (0);
	i = 0;
	srcoct = (unsigned char *)src;
	dstoct = (unsigned char *)dst;
	if (srcoct > dstoct)
		while (n--)
		{
			*(dstoct + i) = *(srcoct + i);
			i++;
		}
	else
		while (n)
		{
			*(dstoct + n - 1) = *(srcoct + n - 1);
			n--;
		}
	return (dst);
}
