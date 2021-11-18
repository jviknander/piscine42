/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:40:43 by jde-melo          #+#    #+#             */
/*   Updated: 2021/07/14 20:16:35 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

 int main()
 {
	 char haystack[20] = "54313661184845";
	 char needle[3] = "11";
	
	 printf("%s\n", ft_strstr(haystack, needle));
}
