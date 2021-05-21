#include <stdio.h>
#include "libft.h"

int main ()
{
    int i = 0;
    char **splited;
    char *s = "Bonjour.. Je vais. fort. bien.. ce.soir. on fait.. la fete?..!.";

    printf("%s\n", s);
    splited = ft_split(s, '.');
    while (i < 10)
    {
        printf("This is splited %d : %s\n", i, splited[i]);
        i++;
    }

    return (0);
}