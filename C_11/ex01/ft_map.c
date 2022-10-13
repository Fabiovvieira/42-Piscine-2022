/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:29:00 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/13 09:29:23 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*num;

	num = (int *)malloc(length * sizeof(int));
	if (!num)
		return (0);
	i = 0;
	while (i < length)
	{
		num[i] = f(tab[i]);
		i++;
	}
	return (num);
}
