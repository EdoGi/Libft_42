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
	const char	*srcoct;
	char		*dstoct;

	srcoct = (char *)src;
	dstoct = (char *)dest;
	while (n--)
		*dstoct++ = *srcoct++;
	return (dest);
}
