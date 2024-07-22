#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

void	print(int n)
{
	char	c;

	if (n == 0)
	{
		write(1, ":", 1);
		return ;
	}

	c = n % 10;
	print(n / 10);
	c += 48;
	write (1, &c, 1);
}

int	main(void)
{
	int	n;
	
	n = ft_iterative_factorial(5);
	print(n);
	printf("%d", n);
	return (0);
}
