/*char    *ft_strrev(char *str)
{
	int i = 0;
	int k = 0;
	while (str[i])
		i++;
	char dest[i + 1];
	i--;
	while (i >= 0)
	{
		dest[k] = str[i];
		k++;
		i--;
	}
	dest[k] = '\0';
	i = 0;
	k = 0;
	while (dest[i])
	{
		str[i] = dest[i];
		i++;
	}
	return (str);
}


*/

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;

	while(str[i])
		i++;
	i--;
	while (j < i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}
