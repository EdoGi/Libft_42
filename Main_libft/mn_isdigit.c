int main()
{
  int i;

  for (i = 0; i <= 127; ++i)
  {
    char c = i;
    printf("%d  ", isdigit(c));
    printf("%d", ft_isdigit(c));
    if (isdigit(c) == ft_isdigit(c) || (isdigit(c) > 0 && ft_isdigit(c) > 0))
      printf(" OK");
    else 
      printf("    ERROR for i = %d", i);
    printf("\n");
  }
  return (0);  
}