/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:11:06 by fpereira          #+#    #+#             */
/*   Updated: 2021/07/20 17:02:44 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nbf;

	nbf = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		nbf *= nb;
		power--;
	}
	return (nbf);
}
/*
int main()
{
	int nb = 3;
	int power = 3;

	printf("nb = %d\npower = %d\n", nb, power);
	printf("result = %d\n", ft_iterative_power(nb, power));
}
*/
