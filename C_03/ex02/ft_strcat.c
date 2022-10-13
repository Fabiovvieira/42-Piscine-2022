#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);


char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while(1)
    {
        if(dest[i] == '\0')
        {
            j=0;
            while(src[j] != '\0')
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
    char leftStr[100] = "Fabio ";
    int n=0;
    char rightStr[] = "Valli vieira";
    
     
    ft_strcat(leftStr, rightStr);
     
    printf("%s\n" , leftStr);
     
     
    return 0;
}
