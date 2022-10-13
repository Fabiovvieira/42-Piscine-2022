#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 127) 
            i++;
        else
            return (0);
    }
	return (1);
}

int	main(void)
{
	char str[] = "Cprogra mming";
    char str1[] = "AJSÄNFAS";
    char str2[] = "";
    char str3[] = "AKJSFJSA4SJJS";
    char str4[2];
    
    str4[0] = 127;
    str4[1] = '\0';
    printf("%s \n", str4);
    printf("%d \n", ft_str_is_printable(str4));
    printf("%d \n", ft_str_is_printable(str));
	printf("%d \n", ft_str_is_printable(str1));
	printf("%d \n", ft_str_is_printable(str2));
    printf("%d \n", ft_str_is_printable(str3));
	
	return(0);
} 