char	*ft_strlowcase(char *str)
{
	char	*st;

	st = str;
	while (*st)
	{
		if ((*st >= 65) && (*st < 91))
			*st += 32;
		st++;
	}
	return (str);
}
