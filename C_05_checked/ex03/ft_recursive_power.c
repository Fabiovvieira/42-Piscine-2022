/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:30:22 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 16:30:46 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
	{
		return (0);
	}
	else
	{
		if (power == 0)
			return (1);
		else
		{
			res = nb * ft_recursive_power(nb, power - 1);
			return (res);
		}
	}
}
/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(-1,- 1));
	printf("%d\n", ft_recursive_power(-1,0));
	printf("%d\n", ft_recursive_power(-1,1));
	printf("%d\n", ft_recursive_power(-1,2));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(0,10));
	printf("%d\n", ft_recursive_power(2,- 1));
	printf("%d\n", ft_recursive_power(2,0));
	printf("%d\n", ft_recursive_power(2,3));

	return (0);
}*/
