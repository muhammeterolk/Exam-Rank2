#include <unistd.h>

char dondur(char c)
{
	if (c == 'z')
		return ('a');
	else if (c == 'Z')
		return ('A');
	return (c + 1);
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
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			{
				c = dondur(c);
				write(1, &c, 1);
			}
			else
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}