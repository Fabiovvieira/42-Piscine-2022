/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:57:52 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/10 10:58:48 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_isspace(char *str, int *index);
int	ft_ver_c_base(char c, char *str, int *place);
int	ft_strtwice_plusminus_size(char *str, int *size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base, char *res, int *i)
{
	int		size;
	long	a;

	a = nbr;
	if (!(ft_strtwice_plusminus_size(base, &size)))
	{
		if (a < 0)
		{
			a = -a;
			res[*i] = '-';
			(*i)++;
		}
		if (a < size)
		{
			res[*i] = base[a];
			(*i)++;
		}
		else
		{
			ft_putnbr_base(a / size, base, res, i);
			ft_putnbr_base(a % size, base, res, i);
		}
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (1)
	{
		if (dest[i] == '\0')
		{
			j = 0;
			while (src[j] != '\0')
			{
				dest[i + j] = src[j];
				j++;
			}
			dest[i + j] = '\0';
			return (dest);
		}
		i++;
	}
}

void	ft_putnbr_base_len(int nbr, char *base, int *len)
{
	int		size;
	long	a;

	a = nbr;
	if (!(ft_strtwice_plusminus_size(base, &size)))
	{
		if (a < 0)
		{
			a = -a;
			(*len)++;
		}
		if (a < size)
		{
			(*len)++;
		}
		else
		{
			ft_putnbr_base_len(a / size, base, len);
			ft_putnbr_base_len(a % size, base, len);
		}
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbint;
	char	*res;
	int		i;
	int		len;

	len = 1;
	i = 0;
	nbint = ft_atoi_base(nbr, base_from);
	ft_putnbr_base_len(nbint, base_to, &len);
	res = (char *)malloc(len * sizeof(char));
	if (!res)
	{
		return (0);
	}
	ft_putnbr_base(nbint, base_to, res, &i);
	return (res);
}
/*#include<stdio.h>
int	main(void)
{
	char *nbr = "1110";
	char *base_from = "01";
	char *base_to = "0123456789abcdef";
	char	*res;

	res = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n",res);


	return(0);

}*/
