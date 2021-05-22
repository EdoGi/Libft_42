#include <stdio.h>
#include "libft.h"

int main()
{
  char dest[100] = "Salam petit ours brun";
  const char salam[8] = "ABCDEFG";
  printf("dest is : %s\n", dest);
  printf("src is : %s\n", salam);
  char *a = memccpy(dest, salam, 'E', 5);
  printf("dest after memccpy is : %s\n", dest);
  printf("memcpy returns : %s\n\n", a);
  return (0);
}