/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsarfati <gsarfati@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:59:10 by gsarfati          #+#    #+#             */
/*   Updated: 2021/07/03 19:13:40 by gsarfati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_print_corner_symbol(int x, int y, int x2, int y2)
{
	if (x2 == 0 && y2 == 0)
	{
		ft_putchar('A');
	}
	else if (x2 == x - 1 && y2 == 0)
	{
		ft_putchar('A');
	}
	else if (x2 == 0 && y2 == y - 1)
	{
		ft_putchar('C');
	}
	else if (x2 == x - 1 && y2 == y - 1)
	{
		ft_putchar('C');
	}
	else
	{
		return (0);
	}
	return (1);
}

int	ft_print_row_symbol(int x, int y, int x2, int y2)
{
	if (y2 == 0)
	{
		ft_putchar('B');
		return (1);
	}
	else if (y2 == y - 1)
	{
		ft_putchar('B');
		return (1);
	}
	return (0);
}

int	ft_print_col_symbol(int x, int y, int x2, int y2)
{
	if (x2 == 0)
	{
		ft_putchar('B');
		return (1);
	}
	else if (x2 == x - 1)
	{
		ft_putchar('B');
		return (1);
	}
	return (0);
}

void	ft_print_line(int x, int y, int x2, int y2)
{
	int	corner;
	int	row;
	int	col;

	corner = ft_print_corner_symbol(x, y, x2, y2);
	if (corner == 0)
	{
		row = ft_print_row_symbol(x, y, x2, y2);
	}
	if (corner + row == 0)
	{
		col = ft_print_col_symbol(x, y, x2, y2);
	}
	if (corner + row + col == 0)
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	x2;
	int	y2;

	y2 = 0;
	while (y2 < y)
	{
		x2 = 0;
		while (x2 < x)
		{
			ft_print_line(x, y, x2, y2);
			x2++;
		}
		ft_putchar('\n');
		y2++;
	}
}
