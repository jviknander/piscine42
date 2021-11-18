/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:15:18 by fpereira          #+#    #+#             */
/*   Updated: 2021/07/20 17:04:14 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	fib(int n, int a, int b)
{
	if (n == 0)
		return (a);
	if (n == 1)
		return (b);
	return (fib(n - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fib(index, 0, 1));
}
/*
int	main()
{
	int	nb = 1;
	printf("The %dth in Fibonacci is %d\n", nb, ft_fibonacci(nb));
}
*/
