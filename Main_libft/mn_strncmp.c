int   main(int argc, char **argv)
{
  (void)argc;
  printf("My strncmp is : %d\n", ft_strncmp(argv[1], argv[2], 6));
  printf("My strncmp is : %d\n", strncmp(argv[1], argv[2], 6));

  return(0);
}