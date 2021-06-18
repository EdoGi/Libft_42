/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:10:09 by marvin            #+#    #+#             */
/*   Updated: 2021/05/23 18:10:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;
<<<<<<< HEAD
	
	if (!s || !f)
		return (NULL);
=======

>>>>>>> 6b828e1dba56216c084cca9cb7640cfb947c3348
	i = -1;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
	while (s[++i])
<<<<<<< HEAD
	{
		ret[i] = s[i];
		ret[i] = (*f)(i, ret[i]);
	}
	ret[i] = 0;
=======
		ret[i] = (*f)(i, ret[i]);
	ret[++i] = 0;
>>>>>>> 6b828e1dba56216c084cca9cb7640cfb947c3348
	return (ret);
}