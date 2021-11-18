/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:44:23 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/03 16:24:24 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	a);

void	rush_ifs(int	x, int	y, int	a, int	b)
{
	if (a > 0 && b > 0 && b != x - 1 && a != y - 1)
	{
		ft_putchar(' ');
	}
	else if (a == 0 && b == 0 || a == 0 && b == x - 1)
	{
		ft_putchar('o');
	}
	else if (b == 0 && a == y - 1 || a == y - 1 && b == x - 1)
	{
		ft_putchar('o');
	}
	else if (a == 0 || a == y - 1)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar('|');
	}
}

void	rush(int	x, int	y)
{
	int	a;
	int	b;

	a = 0;
	while (a < y)
	{
		b = 0;
		while (b < x)
		{
			rush_ifs(x, y, a, b);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
