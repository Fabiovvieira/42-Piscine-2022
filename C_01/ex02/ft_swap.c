#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void    ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int	c;
	int	d;

	c = 10;
	d = 20;
	printf("%d %d %c",c,d,'\n');
	ft_swap(&c,&d);
	printf("%d %d %c",c,d,'\n');
}

