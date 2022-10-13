/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:16:31 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 15:16:36 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		if (nb == 0)
			return (1);
		else
		{
			if (nb > 1)
			{
				res = nb * ft_recursive_factorial(nb - 1);
			}
			return (res);
		}
	}
}
/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-1));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}*/
