int main()
{
  char s[100] = "salut bb t'est une petit salope toi dis moi";
  int i;
  
  bzero(s, 38);
  for (i = 1; i < 11; i++)
  {
    printf("%s ", s);
  }
  return (0);
}