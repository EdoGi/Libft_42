int main()
{
  int i;

  for (i = 0; i <= 127; ++i)
  {
    char c = i;
    printf("%d  ", isalpha(c));
    printf("%d", ft_isalpha(c));
    if (isalpha(c) == ft_isalpha(c) || (isalpha(c) > 0 && ft_isalpha(c) > 0))
      printf(" OK");
    else 
      printf("    ERROR for i = %d", i);
    printf("\n");
  }
  return (0);  
}