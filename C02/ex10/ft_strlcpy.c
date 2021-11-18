/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:19:36 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/14 13:54:20 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count])
		count++;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
int		main(void)
{
	char dest[] = "hello barbie ";
	char src[] = "let's go party";
	unsigned int size = 20;
	unsigned int result;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
	result = ft_strlcpy(dest, src, size);
	printf("dest (src) = %s\nresult = %d\n-----\n", dest, result);

	return (0);
}