#include <stdio.h>
#include <stdlib.h>
int	ft_print_num(int num)
{
	return (num + 1);
}


int *ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*num;

	num = (int *)malloc(length * sizeof(int));
	if (!num)
		return (0);
	i = 0;
	while (i < length)
	{
		num[i] = f(tab[i]);
		i++;
	}
	return (num);
}

int	main(void)
{
	int	len;
	int	*vet;
	int	*res;
	int	i;
	len = 10;
	vet = (int *)malloc(len*sizeof(int));
	i = 0;

	while(i < len)
	{
		vet[i] = i;
		printf("%d, ", vet[i]);
		i++;
	}
	printf("\n");
	res = ft_map(vet, len, &ft_print_num);
	i = 0;
	while(i < len)
	{
		printf("%d, ", res[i]);
		i++;
	}
	return (0);
}
