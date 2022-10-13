/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:18:30 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/23 15:27:08 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	********a;
	int	*******b;
	int	******c;
	int	*****d;
	int	****e;
	int	***f;
	int	**g;
	int	*h;
	int	i;

	i = 10;
	a=&b;
	b=&c;
	c=&d;
	d=&e;
	e=&f;
	f=&g;
	g=&h;
	h=&i;
	printf("%d",i);
	ft_ultimate_ft(&a);
	printf("%d",i);

	printf("%p",*******a);
	printf(" ");
	printf("%p",&i);




	return (0);
}
