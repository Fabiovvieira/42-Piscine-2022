/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:51:58 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/11 09:13:21 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	strs_len(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		i++;
	}
	return (len);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	char	*aux;

	i = 0;
	if (size == 0)
		return ((char *)malloc(1 * sizeof(char)));
	res = (char *)malloc((strs_len(size, strs)
				+ ((size - 1) * ft_str_len(sep)) + 1) * sizeof(char));
	if (!res)
		return (0);
	aux = res;
	while (i < size)
	{
		ft_strcpy(aux, strs[i]);
		aux += ft_str_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(aux, sep);
			aux += ft_str_len(sep);
		}
		i++;
	}
	*aux = '\0';
	return (res);
}
#include<stdio.h>
int	main(void)
{
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
	sep = "-";
	res1 = ft_strjoin(size, strs, sep);
	printf("%s\n", res1);
	free(res1);
	free(strs);
	return(0);
}
