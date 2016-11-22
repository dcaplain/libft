#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*cpy;

	if ((cpy = (char *)malloc(sizeof(*cpy) * (ft_strlen(str) + 1))))
	{
		ft_strcpy(cpy, str);
		return (cpy);
	}
	else
		return (NULL);
}
