#include <unistd.h>

int sayısal(char x)
{
	int a = 1;
	if (x >= 'a' && x <= 'z')
		a = x - 'a' + 1;
	if (x >= 'A' && x <= 'Z')
		a = x - 'A' + 1;
	return (a);
}

int main (int ac, char **av)
{
	int i = 0;
	int x;
	if (ac == 2)
	{
		while (av[1][i])
		{
			x = sayısal(av[1][i]);
			while (x > 0)
			{
				write(1, &av[1][i], 1);
				x--;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
