#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    
    i = 0;
    while (src[i] != '\0')
    {
        if (i < size - 1 && size != 0)
        {
            dest[i] = src[i];
        }
        i++;
    }
    if (size != 0)
    {
        dest[size - 1] = '\0';
    }
    
	return (i);
}

int	main(void)
{
	char str1[] = "FabioValli";
    int n = 2;
    int length;
  	char str2[20];


	printf("%s \n", str1);
	printf("%s \n", str2);
    printf("%d \n", n);
    // length = ft_strlcpy(str2,str1,n);
    length = ft_strlcpy(str2,str1,n);
	printf("%d \n", length);
	printf("%s \n", str1);
	printf("%s \n", str2);
	
	return(0);
} 