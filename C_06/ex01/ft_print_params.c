/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:51:16 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/30 14:08:07 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int c, char **v)
{
	int	i;
	int	j;

	i = 1;
	while (i < c && c >= 2)
	{
		j = 0;
		while (v[i][j] != '\0')
		{
			ft_putchar(v[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}	
