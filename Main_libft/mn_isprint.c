int main()
{
  int i;

  for (i = 0; i <= 128; ++i)
  {
    char c = i;
    printf("%d  ", isprint(c));
    printf("%d", ft_isprint(c));
    if (isprint(c) == ft_isprint(c) || (isprint(c) > 0 && ft_isprint(c) > 0))
      printf(" OK");
    else 
      printf("    ERROR for i = %d", i);
    printf("\n");
  }
  return (0);  
}