#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putstr_non_printable(char *str);
void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr_non_printable(char *str)
{
    int i;
    char a[] = "0123456789abcdef";
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126) 
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[i]/16]);
            ft_putchar(a[str[i]%16]);
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