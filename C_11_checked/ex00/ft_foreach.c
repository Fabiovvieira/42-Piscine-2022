/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:23:15 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/13 09:28:03 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	len;
	int	*vet;
	int	i;
	len = 10;
	vet = (int *)malloc(len*sizeof(int));
	i = 0;

	while(i < len)
	{
		vet[i] = i;
		i++;
	}
	ft_foreach(vet, len, &ft_print_num);
	return (0);
}*/
