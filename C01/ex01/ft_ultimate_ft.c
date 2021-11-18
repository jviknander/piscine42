/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:40:15 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 11:19:30 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int	main()
{
	int	a = 3;
	int	*b = &a;
	int	**c = &b;
	int	***d = &c;
	int	****e = &d;
	int	*****f = &e;
	int	******g = &f;
	int	*******h = &g;
	int	********i = &h;
	printf("%d", a);
	ft_ultimate_ft(&i);
	printf("%d", a);	
}
