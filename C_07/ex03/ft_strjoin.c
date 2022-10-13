/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:51:58 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/10 11:27:06 by fvalli-v         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		totallen;

	i = 0;
	totallen = (strs_len(size, strs) + ((size - 1) * ft_str_len(sep)) + 1);
	if (size == 0)
	{
		res = (char *)malloc(1 * sizeof(char));
		return (res);
	}
	res = (char *)malloc(totallen * sizeof(char));
	if (!res)
		return (0);
	while (i < size)
	{
		res = ft_strcat(res, strs[i]);
		if (i < size - 1)
			res = ft_strcat(res, sep);
		i++;
	}
	return (res);
}
#include<stdio.h>
int	main(void)
{
	char	**strs;
	char	*res1;
	char	*sep;
	int	len;
	int	size;
	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (6 + 1));
	strs[0] = "fabio";
	strs[1] = "valli";
	strs[2] = "vieira";
	sep = "----";
	res1 = ft_strjoin(size, strs, sep);
	printf("%s\n", res1);
	free(res1);
	free(strs);
	return(0);
}
