#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i;

	i = 0;
	while (argv[0][i] && argc > 0)
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
