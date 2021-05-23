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

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*srcoct;
	unsigned char		*dstoct;

	srcoct = (unsigned char *)src;
	dstoct = (unsigned char *)dest;
	while (n--)
	{
		*dstoct++ = *srcoct++;
		if (*srcoct == (unsigned char)c)
		{
			*dstoct++ = *srcoct++;
			return (dstoct);
		}
	}
	return (NULL);
}
