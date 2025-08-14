#include <unistd.h>

char dondur(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'a' + 'z' - c;
	else if  (c >= 'A' && c <= 'Z')
		c = 'A' + 'Z' - c;
	return (c);
}

int main (int ac, char **av)
{
	int i = 0;
	char c;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				c = dondur(c);
				write(1, &c, 1);
			}
			else
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n" , 1);
}