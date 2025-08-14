#include <unistd.h>

int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	while(s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result);
}

int asal_mı(int n)
{
	int sayi = 2;
	if (n == 1)
		return (0);
	while (n > sayi)
	{
		if(n % sayi == 0)
			return (0);
		sayi++;
	}
	return (1);
}
void putschar(char c)
{
	write(1, &c, 1);
}
void putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n / 10);
	}
	putschar((n % 10) + '0');
}
#include <stdio.h>
int main(int ac, char **av)
{
	int number;
	int deneme = 1;
	int result = 0;
	if (ac == 2)
	{
		number = ft_atoi(av[1]);
		while(number >= deneme)
		{
			if (asal_mı(deneme) == 1)
				result = result + deneme;
			deneme++;
		}
		putnbr(result);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}