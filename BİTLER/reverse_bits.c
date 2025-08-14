// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int		i = 8;
// 	unsigned char	res = 0;

// 	while (i > 0)
// 	{
// 		res = res * 2 + (octet % 2);
// 		octet = octet / 2;
// 		i--;
// 	}
// 	return (res);
// }
// #include <stdio.h>
// int main()
// {
// 	printf("%d", reverse_bits(128));
// }







unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char c = 1;
	int i = 8;
	int deger = 0;

	while (i > 0)
	{
		deger = deger *2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
	return (deger);
}






























// unsigned char	reverse_bits(unsigned char octet)
// {
// 	unsigned char c = 1;
// 	int i = 8;
// 	char dondur;
// 	int basamak = 1;

// 	while (i > 0)
// 	{
// 		if (!(octet & c))
// 			dondur += basamak; 
// 		basamak *= 2;
// 		c <<= 1;
// 		i--;
// 	}
// 	return (dondur);

// }
