#include "libft.h"
#include <stdio.h>

int main()
{
  char dest[100] = "Salam petit ours brun";
  const char salam[10] = "ABCDEFG";

  printf("dest is :             %s\n", dest);
  printf("src is :              %s\n", salam);
  char *a = ft_memmove(dest, salam, 5);
  printf("dest ater memove is : %s\n", dest);
  printf("memmove returns :     %s\n", a);
}