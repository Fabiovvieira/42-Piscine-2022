#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 97;
	while (alphabet < 123)
	{
		ft_putchar(alphabet);
		alphabet = alphabet + 1;
	}
}
int main()
{
    ft_print_alphabet();
    return 0;
}
