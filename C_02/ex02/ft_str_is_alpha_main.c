#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) 
            i++;
        else
            return (0);
    }
	return (1);
}

int	main(void)
{
	char str[] = "Cprgramming";
    char str1[] = "Cprogr*mming";
    char str2[] = "";


    printf("%d \n", ft_str_is_alpha(str));
	printf("%d \n", ft_str_is_alpha(str1));
	printf("%d \n", ft_str_is_alpha(str2));
	
	return(0);
} 