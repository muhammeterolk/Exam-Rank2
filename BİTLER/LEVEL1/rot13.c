#include <unistd.h>

char dondustur (char c)
{
	char y;
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		y = c + 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		y = c - 13;
	return (y);
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
				c = dondustur(av[1][i]);
				write (1, &c, 1);
			}
			else
				write(1, &c, 1); 
			i++;
		}
	}
	write(1, "\n",1);
}
