#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_putnbr(int nb);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb < 10)
			ft_putchar(nb + 48);
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}



int main (void)
{
    int n = 0;
    int n1 = -1523551;
    int n2 = 2147483647;
    ft_putnbr(n);
    ft_putnbr(n1);
    ft_putnbr(n2);

    return(0);
}