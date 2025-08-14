#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t i = 0;
	size_t k = 0;

	if (!s1 || !s2)
		return (NULL);

	while (s1[i])
	{
		k = 0;
		while ((s1[i] != s2[k]) && s2[k])
			k++;
		if (s1[i] == s2[k])
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
