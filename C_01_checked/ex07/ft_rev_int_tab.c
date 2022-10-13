/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:19:52 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/26 14:19:10 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		a = tab[i];
		b = tab[size - 1 - i];
		tab[i] = b;
		tab[size - 1 - i] = a;
		i++;
	}
}