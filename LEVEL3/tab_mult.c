#include <unistd.h>

int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;

	while(s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result);
}
void	ft_putchar(char c)
{
	write(1, &c , 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb/10);
	ft_putchar((nb % 10) + '0');
}

int main(int ac, char **av)
{
	int n;
	int i = 1;
	if(ac == 2)
	{
		n = ft_atoi(av[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar('x');
			ft_putchar(' ');
			ft_putnbr(n);
			ft_putchar(' ');
			ft_putchar('=');
			ft_putchar(' ');
			ft_putnbr(i * n);
			ft_putchar('\n');
			i++;
		}
		return (0);
	}
	ft_putchar('\n');
}
