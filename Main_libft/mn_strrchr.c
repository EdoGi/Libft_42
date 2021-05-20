int main()
{
  int c = '1';
  const char s[] = "213123";

  char *mystrrchr = ft_strrchr(s, c);
  char *thestrrchr = strrchr(s, c);
  printf("My strrchr is : %s\n", mystrrchr);
  printf("The strrchr is : %s\n", thestrrchr);
  return(0);
}