#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	file;
	int	num;

	file = open("numbers.dict", O_RDONLY);
	
	if (file == -1)
	{
		//some error
	}

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		print_words(num);
	}

}
