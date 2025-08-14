unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int count;

	if (a >= b)
		count = a;
	else
		count = b;

	while (count < a*b)
	{
		if ((count % a == 0) && (count % b == 0))
			return (count);
		count++;
	}
	return (count);
}


#include <stdio.h>
int main()
{
	printf("%d", lcm(5329, 2));
}