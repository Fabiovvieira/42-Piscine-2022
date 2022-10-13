
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	alphabet_reverse;

	alphabet_reverse = 122;
	while (alphabet_reverse > 96)
	{
		ft_putchar(alphabet_reverse);
		alphabet_reverse--;
	}
}

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}
