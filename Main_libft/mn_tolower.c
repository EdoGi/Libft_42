int main()
{
  int i;

  for (i = 0; i <= 142; ++i)
  {
    char c = i;
    printf("%d  ", tolower(c));
    printf("%d", ft_tolower(c));
    if (tolower(c) == ft_tolower(c))
      printf(" OK");
    else 
      printf("    ERROR for i = %d", i);
    printf("\n");
  }
  return (0);  
}