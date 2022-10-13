/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:59:42 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/10/10 11:32:07 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strcount(char *str, char *charset, int *lensep)
{
	int	i;
	int	j;
	int	count;
	int	len;

	i = 0;
	j = 0;
	count = 0;
	while (charset[j])
	{
		j++;
	}
	len = j;
	*lensep = len;
	while (str[i])
	{
		while (str[i] && !(ft_strncmp(str + i, charset, len)))
			i = i + len;
		if (str[i])
			count++;
		while (str[i] && (ft_strncmp(str + i, charset, len)))
			i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *charset, int lensep)
{
	int	i;

	i = 0;
	while (str[i] && (ft_strncmp(str + i, charset, lensep)))
	{
		i++;
	}
	return (i);
}

char	*ft_print_word(char *str, char *charset, int lensep)
{
	int		i;
	int		lenstr;
	char	*array;

	i = 0;
	lenstr = ft_strlen(str, charset, lensep);
	array = (char *)malloc((lenstr + 1) * sizeof(char));
	while (str[i] && (ft_strncmp(str + i, charset, lensep)))
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**array;
	int		count;
	int		lensep;

	i = 0;
	j = 0;
	lensep = 0;
	count = ft_strcount(str, charset, &lensep);
	array = (char **)malloc((count + 1) * sizeof(char *));
	while (str[i] && j < count)
	{
		while (str[i] && !(ft_strncmp(str + i, charset, lensep)))
			i = i + lensep;
		if (str[i])
		{
			array[j] = ft_print_word((str + i), charset, lensep);
			j++;
		}
		while (str[i] && (ft_strncmp(str + i, charset, lensep)))
			i++;
	}
	array[j] = 0;
	return (array);
}
/*#include<stdio.h>
int	main(void)
{
	char	**strs;
	char	*res1;
	char	*sep;
	int		j;

	j = 0;
	sep = "##";
	res1 = "fbdasda##djaskljdklajslk##fbaio####fff##";
	strs = ft_split(res1,sep);
	while (strs[j])
	{
		printf("%s\n", strs[j]);
		j++;
	}
	return(0);
}*/
