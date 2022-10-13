#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while(1)
    {
        if(dest[i] == '\0')
        {
            j=0;
            while(src[j] != '\0'&& j < nb)
            {
                dest[i + j] = src[j];
                j++;
            }
            dest[i + j] = '\0';
            return (dest);
        }
        i++;
    }
}

int main(void)
{
    char leftStr[10] = "Fabio";
    int n=10;
    char rightStr[] = "Valli vieira";
    
     
    ft_strncat(leftStr, rightStr,n);
     
    printf("%s\n" , leftStr);
     
     
    return 0;
}