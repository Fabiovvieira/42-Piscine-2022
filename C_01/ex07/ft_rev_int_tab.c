#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
    int a;
    int b;
    int i=0;
    while (i < (size/2))
    {
        a = tab[i];
        b = tab[size - 1 - i];
        tab[i]=b;
        tab[size - 1 - i]=a;
        i++;
    }
}

int main(void)
{
    int vec[5] = {1,2,3,6,5};
    int si = 5;
    // int vec[4] = {1,2,3,4};
    // int si = 4;
    // int vec[1] = {1};
    // int si = 1;
    printf("%d, %d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3], vec[4]); 
    ft_rev_int_tab(&vec,si);
    printf("%d, %d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3], vec[4]); 
    // printf("%d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3]); 
    // ft_rev_int_tab(&vec,si);
    // printf("%d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3]); 
    // printf("%d", vec[0]); 
    // ft_rev_int_tab(&vec,si);
    // printf("%d", vec[0]); 
}