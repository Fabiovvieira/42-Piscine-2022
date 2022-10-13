#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122) 
            i++;
        else
            return (0);
    }
	return (1);
}

int	main(void)
{
	char str[] = "Cprogramming";
    char str1[] = "asfgffgf";
    char str2[] = "";
    char str3[] = "asadasda5asdas";


    printf("%d \n", ft_str_is_lowercase(str));
	printf("%d \n", ft_str_is_lowercase(str1));
	printf("%d \n", ft_str_is_lowercase(str2));
    printf("%d \n", ft_str_is_lowercase(str3));
	
	return(0);
} 