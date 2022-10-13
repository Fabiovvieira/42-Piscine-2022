#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);


char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i = 0;
    while (i < n && src[i] != '\0')
    {
		dest[i] = src[i];
        i++;
    }
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

int	main(void)
{
	char str1[] = "C programming";
    int n = 5;
  	char str2[50] = "";
	char str3[50];
	char str4[50];


	printf("%s \n", str1);
	printf("%s \n", str2);
	str2[n] = '\0';
	printf("%s \n", ft_strncpy(str2,str1,n));
	printf("%s \n", str1);
	printf("%s \n", str2);
	
// 	printf("%s \n", str1);
// 	printf("%s \n", str2);
// 	str2[n] = '\0';
// 	printf("%s \n", strncpy(str2,str1,n));
// 	printf("%s \n", str1);
// 	printf("%s \n", str2);
	
	return(0);
} 