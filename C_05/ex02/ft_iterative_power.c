/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:16:49 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 15:17:23 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(-1,- 1));
	printf("%d\n", ft_iterative_power(-1,0));
	printf("%d\n", ft_iterative_power(-1,1));
	printf("%d\n", ft_iterative_power(-1,2));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(0,10));
	printf("%d\n", ft_iterative_power(2,- 1));
	printf("%d\n", ft_iterative_power(2,0));
	printf("%d\n", ft_iterative_power(2,2));

	return (0);
}*/
