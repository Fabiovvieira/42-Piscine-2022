/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:24 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 12:50:14 by fvalli-v         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strplusminus(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strtwice(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 1;
		while (str[i + j] != '\0')
		{
			if (str[i] == str[i + j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_pos_in_base(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
}

int	ft_ver_c_base(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		k;
	int		sinal;
	int		len;
	char	num[10];
	int		pot;
	int		res;
	int		size;

	pot = 1;
	res = 0;
	size = ft_strlen(base);
	sinal = 0;
	i = 0;
	j = 0;
	k = 0;
	if (size > 1 && !(ft_strplusminus(base)) && !(ft_strtwice(base)))
	{
		sinal = ft_isspace(str, &i);
		while (ft_ver_c_base(str[j + i], base))
		{
			num[j] = str[j + i];
			j++;
		}
		num[j] = '\0';
		len = j;
		j = 0;
		while (j < len)
		{
			while (k < len - 1 - j)
			{
				pot = pot * size;
				k++;
			}
			res = pot * (ft_pos_in_base(num[j], base)) + res;
			pot = 1;
			k = 0;
			j++;
		}
		if (sinal % 2 == 0)
			return (res);
		else
			return (-res);
	}
	return (0);
}
/*#include<stdio.h>
#include<unistd.h>
int	main(void)
{
    printf("%d\n", ft_atoi_base(" --+--+2324882ab567","0123456789"));
    printf("%d\n", ft_atoi_base(" ---+--+112a34ab567","01"));
    printf("%d\n", ft_atoi_base(" -+--+1234567","0123456789"));
    return (1);
}*/
