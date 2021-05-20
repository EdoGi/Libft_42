#include <stdio.h>
#include "libft.h"

int main()
{
    const char *s1 = "-... - -Salut à-.-toi moineau--.  -  ..";
    const char *set = ".- ";
    
    printf("This is s1 : \n%s\n", s1);
    printf("This is set : \n%s\n", set);
    printf("This is s1 : \n%s\n", ft_strtrim(s1, set));
    return (0);
}