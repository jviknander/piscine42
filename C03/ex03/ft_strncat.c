/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:17:16 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/14 11:43:07 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[20] = "3,";
	char src[] = "1415926535";
	unsigned int	nb = 4;

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);
}
*/
