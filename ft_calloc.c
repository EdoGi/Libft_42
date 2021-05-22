/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:37:36 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 22:37:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total;

	if (!count || !size)
		return (malloc(0));
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return ((void *)ptr);
}
