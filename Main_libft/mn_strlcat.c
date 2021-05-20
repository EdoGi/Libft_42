int main(int argc, char **argv)
{
  (void)argc;
  char dst1[] = "Salut";
  char dst2[] = "Salut";
  int mylcat = ft_strlcat(dst1, argv[1], 8);
  int thelcat = strlcat(dst2, argv[1], 8);
  
  printf("My Strlcat did : %s\nfor %d\n", dst1, mylcat);
  printf("The Strlcat did : %s\nfor %d\n", dst2, thelcat);
  return (0);
}