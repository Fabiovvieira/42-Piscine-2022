#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str+i) != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char *str = "Fabio1234567891";
	int len;

	len = ft_strlen(str);
	printf("%d",len);
	return(0);
}
