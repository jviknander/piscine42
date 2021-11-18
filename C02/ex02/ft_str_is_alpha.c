/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:38:36 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 09:29:19 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
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
	printf("%d", ft_str_is_alpha(str));
}*/
