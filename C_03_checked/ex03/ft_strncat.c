/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:42:04 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/29 09:14:42 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (1)
	{
		if (dest[i] == '\0')
		{
			j = 0;
			while (src[j] != '\0' && j < nb)
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
