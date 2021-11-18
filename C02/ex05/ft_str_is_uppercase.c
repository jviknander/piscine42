/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 22:12:50 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 09:29:25 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 64 && str[i] < 92))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char	str[] = "HELLO";

	printf("%d", ft_str_is_uppercase(str));
}
