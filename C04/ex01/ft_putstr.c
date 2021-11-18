/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:38:30 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/18 16:31:30 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		write(1, (str + i), 1);
		i++;
	}
}
/*
int	main()
{
	char	str[] = "ciao"; 
	ft_putstr(str);
	return (0);
}
*/
