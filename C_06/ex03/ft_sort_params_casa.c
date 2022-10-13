#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort(char **str, int size)
{
	int	i;
	int	j;
	char	*aux;

	i=0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				aux = str[j];
				str[j] = str[i];
				str[i] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int c, char **v)
{
	int	i;

	i = 1;
	if(c > 1)
	{
		ft_sort(&v[1], c - 1);
		while (i < c)
		{
			ft_putstr(v[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
