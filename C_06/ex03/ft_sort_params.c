#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void    ft_putstr(char *str)
{
    int i;

    i=0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void	ft_sort(char *str)
{
	int	i;
	int	j;
	int	size;
	char	aux;

	size = ft_strlen(str);
	i=0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] > str[j])
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
	int	j;

	i = 1;
	if(c > 1)
	{
	   // printf("%d",c);
		while (i < c)
		{
		  //  printf("%d",i);
			ft_sort(v[i]);
			ft_putstr(v[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
