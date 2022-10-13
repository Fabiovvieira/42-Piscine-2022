/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:19:30 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/24 16:34:19 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	imprimir(int x, char inicio, char meio, char fim)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 && x >= 1)
		{
			ft_putchar(inicio);
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (i == x - 1)
		{
			ft_putchar(fim);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(meio);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			imprimir(x, 'A', 'B', 'A');
		}
		else if (i == y - 1)
		{
			imprimir(x, 'C', 'B', 'C');
		}
		else
		{
			imprimir(x, 'B', ' ', 'B');
		}
		i++;
	}
}
