#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	while (*dest)
		dest++;
	while (*src && n > 0)
	{
		*(dest++) = *(src++);
		n--;
	}
	*dest = '\0';
	return (dest);
}
