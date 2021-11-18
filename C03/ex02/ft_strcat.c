/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:49:55 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/14 11:29:17 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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
	char dest[20] = "To be a rock ";
	char src[] = "and not roll";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);
}
*/
