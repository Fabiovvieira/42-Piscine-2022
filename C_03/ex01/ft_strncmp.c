#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i]-s2[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char leftStr[] = "hfgh";
    char rightStr[] = "hfghhhhhhhhh";
    int n = 5;
     
    int res = ft_strncmp(leftStr, rightStr, 3);
     
    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
         
    printf("\nValue returned by strcmp() is:  %d" , res);
     
     
    return 0;
}