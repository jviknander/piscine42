/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:53:00 by fpereira          #+#    #+#             */
/*   Updated: 2021/07/20 17:01:56 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main()
{
	int nb = 5;

	printf("%d! = %d\n", nb, ft_recursive_factorial(nb));
}
*/
