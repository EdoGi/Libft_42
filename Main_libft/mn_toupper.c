int main()
{
  int i;

  for (i = 0; i <= 142; ++i)
  {
    char c = i;
    printf("%d  ", toupper(c));
    printf("%d", ft_toupper(c));
    if (toupper(c) == ft_toupper(c))
      printf(" OK");
    else 
      printf("    ERROR for i = %d", i);
    printf("\n");
  }
  return (0);  
}