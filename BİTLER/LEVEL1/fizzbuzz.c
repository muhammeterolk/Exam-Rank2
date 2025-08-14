#include <unistd.h>

void ft_putnbr(int x)
{
	char c;
	if (x > 9)
		ft_putnbr(x / 10);
	c = x % 10 + '0';
	write (1, &c, 1);
}
int main ()
{
	int x = 1;

	while (101 > x)
	{
		if (x % 3 == 0 && x % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (x % 3 == 0)
			write (1, "fizz", 4);
		else if (x % 5 == 0)
			write(1, "buzz", 4); 
		else
			ft_putnbr(x);
		write (1, "\n", 1);
		x++;
	}
}
