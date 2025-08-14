int	ft_space(char s)
{
	if (s == ' ' || s == '\t')
		return (1);
	return (0);
}

#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	char *s;
	if (ac == 2)
	{
		s = av[1];
		while (ft_space(s[i]))
			i++;
		while (s[i])
		{
			while (!ft_space(s[i]) && s[i])
			{
				write(1, &s[i], 1);
				i++;
			}
			while (ft_space(s[i]) && s[i])
				i++;
			if(s[i])
				write(1, "   ", 3);
		}	
	}
	write(1, "\n", 1);
}