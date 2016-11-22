#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*cur_h;
	char	*cur_n;

	cur_h = (char *)haystack;
	cur_n = (char *)needle;
	while (*haystack)
	{
		cur_h = (char *)haystack;
		cur_n = (char *)needle;
		while (*cur_n && *cur_h == *cur_n)
		{
			cur_h++;
			cur_n++;
		}
		if (*cur_n == '\0')
		{
			cur_h = (char *)haystack;
			return (cur_h);
		}
		else
			haystack++;
	}
	return (NULL);
}
