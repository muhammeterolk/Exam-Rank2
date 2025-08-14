#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char c = 1 << 7; //10000000
	int i = 8;

	while(i > 0)
	{
		if(octet & c)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		c >>= 1;
		i--;
	}
}
int main()
{
	print_bits(128);
}
