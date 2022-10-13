/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:36:55 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 13:00:36 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char *str = "Fabio1234567891";
	int len;

	len = ft_strlen(str);
	printf("%d",len);
	return(0);
}*/
