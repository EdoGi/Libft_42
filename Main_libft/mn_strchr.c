int main()
{
  int c = 97;
  const char s[] = "dAvawrAwrDdaDdbof";

  char *mystrchr = ft_strchr(s, c);
  char *thestrchr = strchr(s, c);
  printf("My strchr is : %s\n", mystrchr);
  printf("The strchr is : %s\n", thestrchr);
  return(0);
}