/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:28:36 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/03 13:13:42 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strplusminus(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	a;

	a = nbr;
	size = ft_strlen(base);
	if (size > 1 && !(ft_strplusminus(base)) && !(ft_strtwice(base)))
	{
		if (a < 0)
		{
			a = -a;
			ft_putchar('-');
		}
		if (a < size)
			ft_putchar(base[a]);
		else
		{
			ft_putnbr_base(a / size, base);
			ft_putnbr_base(a % size, base);
		}
	}
}
/*
int	main(void)
{
	// int	n = -12;
        // int     n = -2147483648;
	// int	n = 2147483647;
	int	n = 0;
	ft_putnbr_base(n,"0123456789");
	return(1);
}*/
