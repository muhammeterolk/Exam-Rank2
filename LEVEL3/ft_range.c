#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = 0;
	int *s;
	if (end >= start)
	{
		s = malloc(sizeof(int) * (end - start) + 1);
		len = end - start;
		while(i <= len)
		{
			s[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		s = malloc(sizeof(int) * (start - end) + 1);
		len = start - end;
		while(i <= len)
		{
			s[i] = start;
			start--;
			i++;
		}
	}
	return (s);
}
#include <stdio.h>
int main()
{
	int *x = ft_range(0, 0);
	printf("%d ", x[0]);
	printf("%d ", x[1]);
	printf("%d ", x[2]);
	printf("%d ", x[3]);
}