#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 57) 
            i++;
        else
            return (0);
    }
	return (1);
}

int	main(void)
{
	char str[] = "12548d123";
    char str1[] = "120215";
    char str2[] = "";


    printf("%d \n", ft_str_is_numeric(str));
	printf("%d \n", ft_str_is_numeric(str1));
	printf("%d \n", ft_str_is_numeric(str2));
	
	return(0);
} 