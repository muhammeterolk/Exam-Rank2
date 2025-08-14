#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int control;
	if (ac == 3)
	{
		int n1 = atoi(av[1]);
		int n2 = atoi(av[2]);

		
		if(n1 >= n2)
			control = n2;
		else 
			control = n1;
		while (control > 1)
		{
			if ((n1 % control == 0) && (n2 % control == 0))
			{
				printf("%d", control);
				return (0);
			}
			control--;
		}
		printf("%d", 1);
	}
	printf("\n");
}