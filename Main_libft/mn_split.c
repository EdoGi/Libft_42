#include <stdio.h>
#include "libft.h"

int main ()
{
    int i = 0;
    char **splited;
/*
    char *s = "Bonjour.. Je vais. fort. bien.. ce.soir. on fait.. la fete?..!.";
    char *s = "Tripouille";
*/
    char *s = "saluti-ddwffw ------   c--";
        

    printf("%s is %zu\n", s, ft_strlen(s));
    splited = ft_split(s, '-');
    while (i < 6)
    {
        printf("This is splited %d : %s\n", i, splited[i]);
        i++;
    }

    return (0);
}