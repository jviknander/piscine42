/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:35:12 by fpereira          #+#    #+#             */
/*   Updated: 2021/07/20 17:05:15 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return ((int)i);
	return (0);
}
/*
int	main()
{
	int	nb;

	nb = 16;
	printf("The sqrt of %d is %d\n", nb, ft_sqrt(nb));
}
*/
