/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:56:44 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 22:56:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*srcoct;
	unsigned char	*dstoct;

	srcoct = (unsigned char *)src;
	dstoct = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	while (n--)
		*dstoct++ = *srcoct++;
	return (dest);
}
