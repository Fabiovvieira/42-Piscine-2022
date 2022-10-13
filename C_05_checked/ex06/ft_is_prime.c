/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:05 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 16:34:10 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	i = 0;
	num = nb;
	if (num >= 0)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	i = 2;
	sqrt = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	if (nb == 3 || nb == 2)
		return (1);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(27));
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(104729));
	return(0);
}*/
