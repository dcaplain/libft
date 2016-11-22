#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	*str2;

	str2 = (char *)str;
	while (*str2 && *str2 != c)
		str2++;
	if (*str2 == c)
		return (str2);
	else
		return (NULL);
}
