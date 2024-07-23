#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int	len;

	len = ft_strlen(src);
	ptr = (char*)malloc(len);
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = *src;
	ptr -= len;
	return (ptr);
}
