#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int c, char **v)
{
	int	i;
	int	j;

	i = c - 1;
	if(c > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (v[i][j] != '\0')
			{
				ft_putchar(v[i][j]);
				j++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
