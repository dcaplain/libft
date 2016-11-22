#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(const char *str);

size_t	ft_strlen(const char *str);

char	*strncpy(char *dest, const char *src, size_t n);

char	*ft_strcat(char *dest, const char *src);

char	*ft_strncat(char *dest, const char *src, size_t n);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

char	*ft_strstr(const char *haystack, const char *needle);

#endif
