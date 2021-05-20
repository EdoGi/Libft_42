#include <stdio.h>
#include "libft.h"

int main()
{
    char s[70] = "Salut petit enfant de la jungle. Aimes tu le profiterole ?";

    printf("This is my new string :\n%s", ft_substr(s, 6, 15));
    return (0);
}