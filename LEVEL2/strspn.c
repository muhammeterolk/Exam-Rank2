#include <stdlib.h>


size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t k = 0;
	while (s[i])
	{
		k = 0;
		while ((s[i] != accept[k]) && accept[k])
			k++;
		if (s[i] == accept[k])
			i++;
		else
			return (i);
	}
	return (i);
}
