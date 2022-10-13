/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:44:10 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/04 09:39:23 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str, int *i)
{
	int	sinal;

	sinal = 0;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sinal++;
		(*i)++;
	}
	return (sinal);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	res;

	res = 0;
	i = 0;
	sinal = ft_isspace(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (sinal % 2 == 0)
		return (res);
	else
		return (-res);
}
/*#include<stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi(" --+-+1234ab567"));
    printf("%d\n", ft_atoi(" --+-+-+12a34ab567"));
    printf("%d\n", ft_atoi(" -+--+2147483648"));
    return(1);
}*/
