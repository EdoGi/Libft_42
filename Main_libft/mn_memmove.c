int main()
{
  char dest[100] = "Salam petit ours brun";
  const char salam[10] = "abcdefg";

  printf("%s\n", dest);
  char *a = ft_memmove(dest, salam, 5);
  printf("%s\n", dest);
  printf("%s\n", a);
}