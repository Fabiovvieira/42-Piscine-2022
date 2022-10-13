/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:32 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/10 10:51:40 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*num;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	num = (int *)malloc((max - min) * sizeof(int));
	if (num == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = num;
	while (i < (max - min))
	{
		num[i] = min + i;
		i++;
	}
	return (max - min);
}
/*#include<stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	size;
	int	i;

	min = -1;
	max = 18;
	size = ft_ultimate_range(&arr, min, max);
	for (i = 0; i < (size); i++)
	{
		printf("%d ", arr[i]);
	}
	return (0);
}*/
