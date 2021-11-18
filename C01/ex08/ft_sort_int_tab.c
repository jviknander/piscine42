/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:22:24 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 11:23:56 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	second;
	int	c;

	first = 0;
	while (first < size)
	{
		second = first + 1;
		while (second < size)
		{
			if (tab[first] > tab[second])
			{
				c = tab[first];
				tab[first] = tab[second];
				tab[second] = c;
			}
			second++;
		}
		first++;
	}
}
int	main(void)
{
	int	n[] = {8, 4, 6, 11, 9, 12, 21, 28};

	ft_sort_int_tab(n, 8);
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", n[i]);
	}
}
