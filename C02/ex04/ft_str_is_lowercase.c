/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:41:33 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 09:29:22 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 96 && str[i] < 123))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	*str;

	str = "hello";
	printf("%d", ft_str_is_lowercase(str));
}

int ft_solucaofixe(char c)
{
	return (c > 96 && c < 123);
}

int ft_solucaomuitafixe(char *str)
{
	int i;

	if(str[i] > 96 && str[i] 123)
		return 0
	return 1
}
*/
