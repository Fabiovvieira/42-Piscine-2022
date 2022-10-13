#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c);

void rush(int largura, int altura);

void ft_putchar(char c)
{
    write(1, &c, 1);   
}

void	imprimir(int largura, char inicio, char meio, char fim)
{
	int	i;

	i = 0;
	while (i < largura)
	{
		if (i == 0 && largura >= 1)
		{
			ft_putchar(inicio);
            if (largura == 1)
            {
			    ft_putchar('\n');
            }
		}
		else if (i == largura - 1)
		{
			ft_putchar(fim);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(meio);
		}
		i++;
	}
}

void	rush(int largura, int altura)
{
	int	i;

	i = 0;
	while (i < altura)
	{
		if (i == 0)
		{
			imprimir(largura, '//', '*', '\\');
		}
		else if (i == altura - 1)
		{
			imprimir(largura, '\\', '*', '//');
		}
		else
		{
			imprimir(largura, '*', ' ', '*');
		}
		i++;
	}
}

int main(void)
{
    rush(10, 10);
    return (0);

}