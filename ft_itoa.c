/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiacomi <egiacomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:15:21 by egiacomi          #+#    #+#             */
/*   Updated: 2021/05/21 15:03:24 by egiacomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_intmin()
{
	char *num;
	
	num = (char *)malloc(sizeof(char) * 10);
	if (!num)
		return (NULL);
	num = "-2147483648";
	return (num);
}

int		ft_intlen(int n)
{
	int size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoalloc(int n)
{
	int	size;
	int neg;
	char *allocated;

	size = 1;
	neg = 0;
	if (n < 0)
		neg = 1;
	size = ft_intlen(n);
	allocated = (char *)malloc(sizeof(char) * (size + 1));
	if (!allocated)
		return (NULL);
	if (neg)
		allocated[0] = '-';
	return (allocated);
}

char	*ft_itoa(int n)
{
	char	*numalpha;
	int		intlen;
	int		j;
	int		i;

	if (n == -2147483648)
	{
		numalpha = ft_intmin();
		return (numalpha);
	}
	numalpha = ft_itoalloc(n);
	intlen = ft_intlen(n);
	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	j = 1;
	while (intlen-- > i)
	{
		numalpha[intlen] = (n / j) % 10 + '0';
		j *= 10;
	}
	numalpha[ft_intlen(n) + 1] = '\0';
	return (numalpha);
}