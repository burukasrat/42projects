int	ft_is_prime(int nb)
{
	int	a;
	int	b;

	b = 0;	
	a = 2;
	while (a <= nb)
	{
		if ((nb % a == 0) && (a != nb))
			b++;
		a++;
	}
	if (b != 0)
		return (0);
	return (1);
}
