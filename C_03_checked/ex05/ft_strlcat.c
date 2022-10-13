/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:49:58 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/29 09:20:23 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= sizedest)
		return (size + sizesrc);
	while (src[i] != '\0' && i < (size - sizedest - 1))
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (sizedest + sizesrc);
}
