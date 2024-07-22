int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}
