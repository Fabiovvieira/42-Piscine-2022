/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:53:14 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/23 10:00:46 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_2(void)
{
	int	a1;
	int	b1;

	a1 = 0;
	while (a1 <= 98)
	{
		b1 = a1 + 1;
		while (b1 <= 99)
		{
			ft_putchar(a1 / 10 + 48);
			ft_putchar(a1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(b1 / 10 + 48);
			ft_putchar(b1 % 10 + 48);
			if (a1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b1++;
		}
		a1++;
	}
}


int main()
{
    ft_print_comb_2();

    return 0;
}