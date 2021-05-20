int main(int argc, char **argv)
{
  (void)argc;
  char dst1[5];
  char dst2[5];
  int mylcpy = ft_strlcpy(dst1, argv[1], 10);
  int thelcpy = strlcpy(dst2, argv[1], 10);
  
  printf("My Strlcpy did : %s\nfor %d\n", dst1, mylcpy);
  printf("The Strlcpy did : %s\nfor %d\n", dst2, thelcpy);
  return (0);
}