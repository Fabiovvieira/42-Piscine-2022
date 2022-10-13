/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:48:35 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/10 10:49:25 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*num;
	int	i;

	i = 0;
	range = max - min;
	if (min >= max)
		return (0);
	num = (int *)malloc(range * sizeof(int));
	if (num == NULL)
		return (0);
	else
	{
		while (i < range)
		{
			num[i] = min + i;
			i++;
		}
	}
	return (num);
}
/*#include<stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = -10;
	max = 10;
	printf("main = %p \n", array);
	array = ft_range(min, max);
	printf("main = %p \n", array);
	for (i = 0; i < (max - min); i++)
	{
		printf("%d ", array[i]);
	}
	printf("main = %p \n", array);
	return (0);
}*/
