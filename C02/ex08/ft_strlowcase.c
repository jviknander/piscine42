/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:51:47 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 09:29:31 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main()
{
	char	str[] = "LED ZEPPELIN";

	ft_strlowcase(str);
	printf("%s", str);
}
