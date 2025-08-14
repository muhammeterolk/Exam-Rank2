// önemli
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t k;
	while (s[i])
	{
		k = 0;
		while((s[i] != reject[k]) && reject[k])
			k++;
		if ((s[i] == reject[k]))
			return (i);
		i++;
	}
	return (i);
}
