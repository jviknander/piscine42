/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:00:42 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/05 20:00:45 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0' - 1;
	while (a++ < '7')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				if (!(a == '0' && b == '1' && c == '2' ))
				{
					write(1, ", ", 2);
				}
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
			}
		}	
	}
}
