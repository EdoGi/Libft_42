#include "libft.h"
#include <stdio.h>

char test(unsigned int i, char c)
{
    i = i;
    if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main()
{
    printf("%s",ft_strmapi("salut petit ours brun2212", (*test)));
    return (0);
}