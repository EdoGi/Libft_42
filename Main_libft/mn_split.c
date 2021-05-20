#include <stdio.h>
#include "libft.h"

int main ()
{
    int i = 0;
    char **splited;
    char *s = "Salut..a.toi...petit.monstre";

    splited = ft_split(s, '.');
    while (i < 8)
    {
        printf("This is splited %d : %s\n", i, splited[i]);
        i++;
    }
    return (0);
}