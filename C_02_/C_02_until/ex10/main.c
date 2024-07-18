#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*str;
	char	dest[5];
	unsigned int	len;

	str = "Hello wor";
	len = ft_strlcpy(&dest[0], str, 5);
	
	char	*st = &dest[0];
	while (*st)
	{
		write (1, st, 1);
		st++;
	}
	return (0);
}
