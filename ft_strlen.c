#include <stdio.h>

int ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("nb mot %d\n", ft_strlen("bonjour"));
	return 0;
}
