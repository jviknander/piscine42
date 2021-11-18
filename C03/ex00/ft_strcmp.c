/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:23:30 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/14 10:11:15 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	s1 = "fine";
	s2 = "fina";
	printf("função certa = %d\n", strcmp(s1, s2));
	printf("minha função = %d\n", ft_strcmp(s1, s2));
}
*/