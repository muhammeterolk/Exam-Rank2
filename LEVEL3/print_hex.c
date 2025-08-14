#include <unistd.h>


int ft_space(char c)
{
	if ((c >= 9 && c<= 13) || c == ' ')
		return (1);
	return (0);
}
void puthex(int n)
{
	char *s = "0123456789abcdef";

	if(n > 15)
	{
		puthex(n/16);
	}
	write(1, &s[n % 16], 1);
}

int	ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	while(ft_space(s[i]))
		i++;
	if(s[i] == '+')
		i++;
	while(s[i] >= '0' && s[i] <= '9')
	{
		result = ((result * 10) + s[i] - '0'); 
		i++;
	}
	return (result);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		puthex(ft_atoi(av[1]));
	}
	write(1,"\n",1);
}