/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:45:33 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/22 12:06:39 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc (sizeof(int) * length);
	if (*range == NULL)
		return (-1);
	i = 0;
	length = 0;
	while (min < max)
	{
		range[i][length] = min;
		length++;
		min++;
	}
	return (length);
}
/*
#include <stdio.h>

void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	debug_dump_array(range, bound);
}
*/
