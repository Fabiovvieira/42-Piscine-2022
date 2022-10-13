/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:21:53 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/12 09:35:17 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(void)
{
	char a = 'a';
	int b = 10;
	int c = 20;
	char *d = "fabio";
	char *e = "fabio";
	ft_putchar(a);
	printf("b = %d | c = %d \n", b,c);
	ft_swap(&b,&c);
	printf("b = %d | c = %d \n", b,c);
	printf("len = %d", ft_strlen(d));
	printf("cmp = %d", ft_strcmp(d,e));
	return (0);
}
