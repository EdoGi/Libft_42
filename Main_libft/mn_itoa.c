#include <stdio.h>
char    *ft_itoa(int n);

int main()
{
    int i;
    int tab[8] = { 1, 75, 0, -120, 10, -10, 2147483647, -2147483648};

    for (i = 0 ; i <= 7 ; i++)
    {
        printf("int = %d is = %s\n", tab[i], ft_itoa(tab[i]));
    }
    printf("int = %d is = %s\n", 10, ft_itoa(10));
    return (0);
}