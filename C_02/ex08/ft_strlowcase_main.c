#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90) 
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
	return (str);
}

int	main(void)
{
	char str[] = "Cprogramming";
    char str1[] = "AJSÄNfAS";
    char str2[] = "";
    char str3[] = "AKJSFJSA4SJJS";
    
    printf("%s \n", ft_strlowcase(str));
	printf("%s \n", ft_strlowcase(str1));
	printf("%s \n", ft_strlowcase(str2));
    printf("%s \n", ft_strlowcase(str3));
	
	return(0);
} 