/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:47:44 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/23 10:00:04 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a1, char a2, char a3)
{
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, &a3, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if (a < '7')
				{
					write(1, &", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
    ft_print_comb();
    return 0;
}
