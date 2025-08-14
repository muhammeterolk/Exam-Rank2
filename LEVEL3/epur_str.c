#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	char *s;
	if (ac == 2)
	{
		s = av[1];

		while ((s[i] == ' ' || s[i] == '\t') && s[i])
				i++;
		while(s[i])
		{
			while ((s[i] != ' ' && s[i] != '\t') && s[i])
			{
				write(1, &s[i] ,1);
				i++;
			}
			while ((s[i] == ' ' || s[i] == '\t') && s[i])
				i++;
			if (s[i])
				write(1, " ",1);
		}
	}
}