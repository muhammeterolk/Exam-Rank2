#include <stdlib.h>
#include <stdio.h>


int main (int ac, char **av)
{
	int n1 = atoi(av[1]);
	int n2 = atoi(av[3]);
	if (ac == 4)
	{

		if (av[2][0] == '+')
			printf("%d" ,  n1 + n2);
		else if (av[2][0] == '-')
			printf("%d" , n1 - n2);
		else if (av[2][0] == '/')
			printf ("%d", n1/n2);
		else if (av[2][0] == '*')
			printf ("%d", n1*n2);
	}
	printf("\n");
}