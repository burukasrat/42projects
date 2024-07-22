int	validate_base(char *base)
{
	int	len;

	while (*base)
	{

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);

	while (nbr < len)
	{
		rem = nbr % len;
		nbr /= len;

