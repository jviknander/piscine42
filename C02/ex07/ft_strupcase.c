/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 22:26:41 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 09:23:49 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	 int	i;

	 i = 0;
	 while (str[i])
	{
		 if (str[i] > 96 && str[i] < 123)
			 str[i] -= 32;
		 i++;
	}
	 return (str);
}

int	main(void)
{
	char	str[] = "bitch";

	printf("%s", ft_strupcase(str));
}
