#include "libft.h"

int main()
{
  char *test1;
  char *test2;  
  char *test3;
  char *test4;
  char *test5;

  test1 = ft_calloc(10, 1);
  test2 = ft_calloc(0, 0);
  test3 = ft_calloc(10, 0);
  test4 = ft_calloc(0, 10);
  test5 = ft_calloc(5, 8);
  return (0);
}