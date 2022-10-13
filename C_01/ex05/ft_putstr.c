/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:25:49 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/27 11:20:15 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str+i) != '\0')
	{
		write(1,(str+i),1);
		i++;
	}
}

int	main(void)
{
	char *string = "Fabio";
	char string1[2] = {'a','b'};
	ft_putstr(string);
	return(0);
}
