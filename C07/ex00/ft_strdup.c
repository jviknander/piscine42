/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:52:12 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/22 12:06:13 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	c = malloc((i + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strdup("boas pessoal"));
	return (0);
}
*/
