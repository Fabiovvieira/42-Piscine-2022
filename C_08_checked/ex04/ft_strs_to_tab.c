/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:39:46 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/11 14:25:13 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			i;

	i = 0;
	a = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!a)
		return (0);
	while (i < ac)
	{
		a[i].size = ft_str_len(av[i]);
		a[i].copy = (char *)malloc((ft_str_len(av[i]) + 1) * sizeof(char));
		if (!(a[i].copy))
			return (0);
		ft_strcpy(a[i].copy, av[i]);
		a[i].str = av[i];
		i++;
	}
	a[i].size = 0;
	a[i].copy = 0;
	a[i].str = 0;
	return (a);
}
/*#include<stdio.h>
int	main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	char	**strs;
	char	*res1;
	char	*sep;
	int	size;
	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (6 + 1));
	strs[0] = "fao";
	strs[1] = "afa";
	strs[2] = "vieira";
	int				index;
	t_stock_str	*structs;

	structs = ft_strs_to_tab(size, strs);
	index = 0;
	while (index < size)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}

}*/
