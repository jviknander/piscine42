/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:05:24 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 11:19:21 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 8;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
}
