/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiacomi <egiacomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:47:06 by egiacomi          #+#    #+#             */
/*   Updated: 2021/05/20 17:14:03 by egiacomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n > 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*numalpha;
	int		intlen;
	int		i;

	intlen = ft_intlen(n);
	numalpha = (char *)malloc(sizeof(char) * intlen + 1);
	if (!numalpha)
		return (NULL);
	i = 1;
	if (n < 0)
	{
		numalpha[0] = '-';
		while (intlen-- > 1)
		{
			numalpha[intlen] = (n / i) % 10 + '0';
			i *= 10;
		}
	}
	else
	{
		while (intlen-- > 0)
		{
			numalpha[intlen] = (n / i) % 10 + '0';
			i *= 10;
		}
	}
	numalpha[ft_intlen(n) + 1] = '\0';
	return (numalpha);
}
