#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90) 
            i++;
        else
            return (0);
    }
	return (1);
}

int	main(void)
{
	char str[] = "Cprogramming";
    char str1[] = "AJSDNFAS";
    char str2[] = "";
    char str3[] = "AKJSFJSA4SJJS";


    printf("%d \n", ft_str_is_uppercase(str));
	printf("%d \n", ft_str_is_uppercase(str1));
	printf("%d \n", ft_str_is_uppercase(str2));
    printf("%d \n", ft_str_is_uppercase(str3));
	
	return(0);
} 