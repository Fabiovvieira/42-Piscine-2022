/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:13:19 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/26 14:32:51 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	count;
	int	i;

	i = 0;
	while (i < size)
	{
		count = i + 1;
		while (count < size)
		{
			if (tab[i] > tab[count])
			{
				a = tab[count];
				tab[count] = tab[i];
				tab[i] = a;
			}
			count ++;
		}
		i++;
	}
}
