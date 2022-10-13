/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:38:43 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/09/27 13:41:33 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int	main(void)
{
	// char str[] = "Oiçvoce esta bem?";
	char str[] = "Oi\nvoc\te esta bem?";
    // int n;
    // char c;
    // c = 'ç';
    // n = c;
    printf("%s \n", str);
    
    // printf("%c \n", c);
    // printf("%d \n", n);
    
    // print_hex(c);
    

    ft_putstr_non_printable(str);
	return(0);
}
