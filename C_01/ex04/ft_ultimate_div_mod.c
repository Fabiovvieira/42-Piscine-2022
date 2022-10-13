/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:07:15 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/23 16:07:19 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	t_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	a1;
	int	b1;

	a1 = 23;
	b1 = 10;
	printf("%d %d ",a1,b1);
	ft_ultimate_div_mod(&a1,&b1);
	printf("%d %d ",a1,b1);
	return (0);
}
