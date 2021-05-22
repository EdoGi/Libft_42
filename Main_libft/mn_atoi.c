int main(int argc, char **argv)
{
	(void)argc;
	int myatoi = ft_atoi(argv[1]);
	int theatoi = atoi(argv[1]);
	printf("My ATOI is : %d\n", myatoi);
	printf("The ATOI is : %d\n", theatoi);
}