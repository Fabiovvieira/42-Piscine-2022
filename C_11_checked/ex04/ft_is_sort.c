/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:31:26 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/13 09:32:11 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;

	i = 0;
	sort = 1;
	while (i < length - 1 && sort)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sort = 0;
		i++;
	}
	if (sort == 0)
	{
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
/*#include<stdio.h>
int	ft_intcmp(int num1, int num2)
{
	return(num1 - num2);
}

int	main(void)
{
	int	len;
	//int	vet[] = {0,1,2,3,4,5,6,7,11,11};
	int	vet[] = {11,10,9,8,7,6,6,4,3,2};
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
}*/
