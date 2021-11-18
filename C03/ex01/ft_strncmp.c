/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:03:56 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/14 19:17:15 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && (*s1 == *s2) && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int	n;
	s1 = "124";
	s2 = "123";
	n = 8;
	printf("função certa = %d\n", strncmp(s1, s2, n));
	printf("minha função = %d\n", ft_strncmp(s1, s2, n));
}
*/