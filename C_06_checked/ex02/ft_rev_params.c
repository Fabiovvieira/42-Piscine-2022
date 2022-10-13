/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:10:49 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/04 14:11:26 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int c, char **v)
{
	int	i;
	int	j;

	i = c - 1;
	if (c > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (v[i][j] != '\0')
			{
				ft_putchar(v[i][j]);
				j++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
