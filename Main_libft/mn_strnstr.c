int main()
{
  char s1[] = "salut à toi petit chien";
  char s2[] = "petit";
  char *ptr = ft_strnstr(s1, s2, 15);
  char *streun = strnstr(s1, s2, 15);
  printf("my strnstr is %s\n", ptr);
  printf("the strnstr is %s\n", streun);
  return (0);
}