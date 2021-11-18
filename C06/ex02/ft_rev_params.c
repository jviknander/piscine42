#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i;
	int	n;

	i = 0;
	n = argc - 1;
	while (n != 0)
	{
		while (argv[n][i])
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		i = 0;
		n--;
		write(1, "\n", 1);
	}
	return (0);
}
