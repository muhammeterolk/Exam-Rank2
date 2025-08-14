#include <unistd.h>

int main(int ac, char **av)
{
	char *s1;
	char *s2;
	int i = 0;
	int k = 0;
	if (ac == 3)
	{
		s1 = av[1];
		s2 = av[2];
		while(s1[i])
		{
			while(s2[k])
			{
				if(s1[i] == s2[k])
					break ;
				k++;
			}
			if(s2[k] == '\0')
			{
				write(1, "0", 1);
				return (0);
			}
			i++;
		}
		write(1, "1", 1);
		return(0);
	}
	write(1, "\n" ,1);
}