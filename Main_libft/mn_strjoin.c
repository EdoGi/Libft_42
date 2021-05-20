#include <stdio.h>
#include "libft.h"

int main()
{
    char *s1 = "Salut ptit con! ... ";
    char *s2 = "Oi lindo. Tudo bom ?";

    printf("This is joined :\n%s", ft_strjoin(s1, s2));
    return(0); 
}