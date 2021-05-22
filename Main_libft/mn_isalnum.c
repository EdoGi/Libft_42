#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main()
{
  int i;

  for (i = -2; i <= 530 ; ++i)
  {
    char c = i;
    printf("%d  ", isalnum(c));
    printf("%d", ft_isalnum(c));
    if (isalnum(c) == ft_isalnum(c) || (isalnum(c) > 0 && ft_isalnum(c) > 0))
      printf(" OK");
    else 
      printf("    ERROR for i = %d", i);
    printf("\n");
  }
  return (0);  
}