int main()
{
  char dest[100] = "Salam petit ours brun";
  const char salam[10] = "abcdefg";
  int i;
  printf("%s\n", dest);
  char *a = ft_memccpy(dest, salam, 'e', 8);
  printf("%s\n", dest);
  printf("%s\n", a);
  for (i = 0; i < 20; i++)
  {
    printf("%d\n", dest[i]);
  }
  ft_memccpy(dest, salam, 'b', 3);
  printf("\n");
  for (i = 0; i < 5; i++)
  {
    printf("%d\n", dest[i]);
  }
  return (0);
}