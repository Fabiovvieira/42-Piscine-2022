/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:31:59 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/27 11:22:52 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str+i) != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char *str = "Fabio1234567891";
	int len;

	len = ft_strlen(str);
	printf("%d",len);
	return(0);
}
