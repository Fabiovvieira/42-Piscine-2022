#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char str1[] = "C programming";
  	char str2[20];
	char str3[20];
	char str4[20];


	printf("%s \n", str1);
	printf("%s \n", str2);
	printf("%s \n", ft_strcpy(str2,str1));
	printf("%s \n", str1);
	printf("%s \n", str2);
	
// 	printf("%s \n", str1);
// 	printf("%s \n", str2);
// 	printf("%s \n", strcpy(str2,str1));
// 	printf("%s \n", str1);
// 	printf("%s \n", str2);
	
	return(0);
}