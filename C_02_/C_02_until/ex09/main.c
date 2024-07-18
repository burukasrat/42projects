#include <unistd.h>

char	*ft_strcapitalize(char *str);

int	main(int argc, char *argv[])
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un b";
	char	*st;

	st = ft_strcapitalize(str);
	while (*st)
	{
		write(1, st, 1);
		st++;
	}
	return (0);
}
