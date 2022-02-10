#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../libft.h"


int main(int argc, char **argv)
{
	(void)argc;
	double myatof = ft_atof(argv[1]);
	double theatof = atof(argv[1]);
	printf("My ATOF is : %f\n", myatof);
	printf("The ATOF is : %f\n", theatof);
}