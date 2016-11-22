#include "libft.h"

char	*strncpy(char *dest, const char *src, size_t n)
{
	while (*src && n > 0)
	{
		*(dest++) = (src++);
		n--;
	}
	return (dest);
}
