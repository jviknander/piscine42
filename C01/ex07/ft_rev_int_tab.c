/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:31:01 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 19:06:00 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < (size / 2))
	{
		a = tab[start];
		tab[start] = tab[end];
		tab[end] = a;
		start++;
		end--;
	}
}
int	main()
{
	int	b = 0;

	int	n[]  = {0, 1, 2, 3, 4};
	ft_rev_int_tab(n, 5);
		printf("Result of an Reverse array is:\n");
	for (b = 0; b < 5; b++) 
	{
	printf("%d\n", n[b]);
	}
	return 0;
}
