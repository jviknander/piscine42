/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:55:41 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/21 15:44:51 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		ii;
	int		total;

	ret = malloc(sizeof(strs));
	i = 0;
	ii = 0;
	total = 0;
	while (i < size)
	{
		ii = 0;
		while (strs[i][ii])
			ret[total++] = strs[i][ii++];
		ii = 0;
		while (sep[ii] && i != size - 1)
			ret[total++] = sep[ii++];
		i++;
	}
	ret[total] = '\0';
	return (ret);
}
/*
int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
*/
