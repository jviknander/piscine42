#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	count = 0;
	while (src[count])
		count++;
	return (count + size);
}

int		main(void)
{
	char dest[] = "hello barbie ";
	char src[] = "let's go party";
	unsigned int size = 20;
	unsigned int result;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);

	return (0);
}
