/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiacomi <egiacomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 17:59:19 by egiacomi          #+#    #+#             */
/*   Updated: 2021/06/19 17:59:19 by egiacomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_count(const char *s, char sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (sep == 0)
		return (1);
	while (s[i] != 0)
	{
		if (s[i] != sep)
		{
			count++;
			while (s[i] && s[i] != sep)
				i++;
		}
		i++;
	}
	return (count);
}

int	ft_countlen(const char *s, int i, char sep)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != sep)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		count;
	int		start;
	int		i;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	splited = (char **)malloc(sizeof(char *) * count + 1);
	if (splited == NULL)
		return (NULL);
	start = -1;
	i = 0;
	while (s[++start] && i < ft_count(s, c))
	{
		if (s[start] != c)
		{
			count = ft_countlen(s, start, c);
			splited[i++] = ft_substr(s, start, count);
			start += count;
		}
	}
	splited[i] = 0;
	return (splited);
}
