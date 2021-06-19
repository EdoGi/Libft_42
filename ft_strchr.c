/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiacomi <egiacomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 17:59:24 by egiacomi          #+#    #+#             */
/*   Updated: 2021/06/19 17:59:24 by egiacomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return (str = (char *)&s[i]);
	}
	if (s[i] == c)
		return (str = (char *)&s[i]);
	return (NULL);
}
