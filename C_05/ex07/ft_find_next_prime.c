/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:34:20 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 16:35:28 by fvalli-v         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	flag;

	flag = 0;
	while (flag == 0)
	{
		nb++;
		flag = ft_is_prime(nb);
	}
	return (nb);
}
/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(73));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(2532648));
	return(0);
}*/
