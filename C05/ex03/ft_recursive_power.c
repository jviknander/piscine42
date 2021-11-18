/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:52:32 by fpereira          #+#    #+#             */
/*   Updated: 2021/07/20 17:10:22 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main()
{
	int nb = 3;
	int power = 3;

	printf("nb = %d\npower = %d\n", nb, power);
	printf("result = %d\n", ft_recursive_power(nb, power));
}
*/
