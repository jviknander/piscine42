/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 22:20:11 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 09:29:27 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 31 && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char	str[]= "[Almost] /Dropped/ *My* ±Croissant±";

	printf("%d", ft_str_is_printable(str));
}
