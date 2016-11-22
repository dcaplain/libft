/* #include "libft.h" */

char	*ft_strdup(const char *s)
{
	char	*cpy;

	if ((cpy = (char *)malloc(sizeof(*cpy) * (ft_strlen(s) + 1))))
	{
		ft_memcpy(cpy, s, ft_strlen(s));
		cpy[ft_strlen(s)] = '\0';
		return (cpy);
	}
	else
		return (NULL);
}
