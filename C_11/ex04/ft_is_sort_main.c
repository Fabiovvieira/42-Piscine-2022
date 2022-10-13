#include<stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while(i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if(f(tab[i],tab[j]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_intcmp(int num1, int num2)
{
	return(num1 - num2);
}

int	main(void)
{
	int	len;
	int	vet[] = {0,1,2,3,4,5,6,7,9,11};
	int	res;
	int	i;
	len = 10;
	i = 0;

	while(i < len)
	{
		printf("%d, ", vet[i]);
		i++;
	}
	printf("\n");
	res = ft_is_sort(vet, len, &ft_intcmp);
	printf("vet = %d\n",res);
	return (0);
}

