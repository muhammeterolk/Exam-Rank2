#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int end;
	char *s;
	if (ac == 2)
	{
		s = av[1];
		while (s[i])
			i++;
		while (i >= 0 && (s[i-1] == ' ' || s[i-1] == '\t'))
			i--;
		end = i;
		while (i >= 0 && (s[i-1] != ' ' && s[i-1] != '\t'))
			i--;
		while (i < end)
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}