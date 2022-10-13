#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned sizedest;
    unsigned sizesrc;
    sizedest = ft_strlen(dest);
    sizesrc = ft_strlen(src);

    i = 0;
    if (size == 0 || size <= sizedest )
        return(size + sizesrc);
	
	while(src[i] != '\0' && i < (size -sizedest -1))
	{
	    dest[sizedest + i] = src[i];
	    i++;
	}
    dest[sizedest + i] = '\0'; 

    return (sizedest + sizesrc);
}

int main(void)
{
    char leftStr[20] = "123456789";
    unsigned int n=5;
    char rightStr[] = "12345";
    unsigned int n1;
     
    n1 = ft_strlcat(leftStr, rightStr,n);
    printf("%d\n" , n1);
    printf("%s\n" , leftStr);
     
     
    return 0;
}
