#include <unistd.h>

int space(char s)
{
	if(s == ' ' || s == '\t')
		return (1);
	return (0);
}

int lower(char s)
{
	if(s >= 'a' && s <= 'z')
		return(1);
	return (0);
}
int upper(char s)
{
	if(s >= 'A' && s <= 'Z')
		return(1);
	return (0);
}
int alphabet(char s)
{
	if((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int k = 0;
	int i = 1;
	char *s;
	if (ac > 1)
	{
		while(av[i])
		{
			char *s = av[i];
			k = 0;
			while(av[i][k])
			{
				while(space(s[k]) && s[k])
				{
					write(1, &s[k], 1);
					k++;
				}
				while(alphabet(s[k + 1]) && s[k + 1])
				{
					if(upper(s[k]))
						s[k] = s[k] + 32;
					write(1, &s[k], 1);
					k++;
				}
				if (lower(s[k]) && s[k])
				{
					s[k] = s[k] - 32;
					write(1, &s[k] ,1);
				}
				else if (!lower(s[k]) && s[k])
					write(1, &s[k] ,1);
				if (s[k])
					k++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}