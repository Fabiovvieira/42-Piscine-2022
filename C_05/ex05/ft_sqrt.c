/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:32:09 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 16:32:48 by fvalli-v         ###   ########.fr       */
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
	return (0);
}
/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(17));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(2147483647));
	return(0);
}*/
