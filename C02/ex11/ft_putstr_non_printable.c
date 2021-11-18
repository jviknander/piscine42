#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_hexa(char	c)
{
	char	hex1;
	char	hex2;
	int		neg_char;

	ft_putchar('\\');
	if (c < 0)
	{
		neg_char = ((-128 - (c)) * -1) + 128;
		hex1 = neg_char / 16;
		hex2 = neg_char % 16;
	}
	else
	{
		hex1 = c / 16;
		hex2 = c % 16;
	}
	ft_putchar(c);
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			ft_putchar(str[i]);
		else
			ft_hexa(str[i]);
		i++;
	}
}
/*
int	main ()
{
	ft_putstr_non_printable("Coucou\10tu vas bien ?");
	return (0);
}*/
