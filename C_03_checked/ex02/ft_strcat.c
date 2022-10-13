/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:39:48 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/29 09:08:24 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

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
