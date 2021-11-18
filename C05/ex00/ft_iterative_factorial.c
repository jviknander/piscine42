/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:46:58 by fpereira          #+#    #+#             */
/*   Updated: 2021/07/20 17:01:26 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		ret *= nb--;
	return (ret);
}
/*
int	main()
{
	int	nb = 5;
	printf("%d! = %d\n", nb, ft_iterative_factorial(nb));
}
*/
