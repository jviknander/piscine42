/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:04:39 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/15 09:29:16 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char	src[10] = "hello";
	char	dest[10];
	int	n = 3;

	printf("%s", ft_strncpy(dest, src, n));	
}
