#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main()
{
  int i;

  for (i = -150; i <= 300; ++i)
  {
    char c = i;
    printf("%d  ", isascii(c));
    printf("%d", ft_isascii(c));
    if (isascii(c) == ft_isascii(c) || (isascii(c) > 0 && ft_isascii(c) > 0))
      printf(" OK");
    else 
      printf("    ERROR for i = %d", i);
    printf("\n");
  }
  return (0);  
}