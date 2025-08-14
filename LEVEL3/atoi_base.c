
int	ft_control(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

// çok öenmli
int	ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	int result = 0;
	int val;
	int i = 0;
	
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		val = ft_control(str[i]);
		if(val == -1 || val >= str_base)
			break ;
		result = (result * str_base) + val;
		i++;
	}
	return (sign * result);

}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("0777", 8));
}