#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i]-s2[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char leftStr[] = "ifg";
    char rightStr[] = "gfg";
     
    int res = ft_strcmp(leftStr, rightStr);
     
    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
         
    printf("\nValue returned by strcmp() is:  %d\n" , res);
     
     
    return 0;
}