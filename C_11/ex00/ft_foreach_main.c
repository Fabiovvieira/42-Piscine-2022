#include <stdio.h>
#include <stdlib.h>
void	ft_print_num(int num)
{
	printf("%d\n", num);
}


void ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int	main(void)
{
	int	len;
	int	*vet;
	int	i;
	len = 10;
	vet = (int *)malloc(len*sizeof(int));
	i = 0;

	while(i < len)
	{
		vet[i] = i;
		i++;
	}
	ft_foreach(vet, len, &ft_print_num);
	return (0);
}
