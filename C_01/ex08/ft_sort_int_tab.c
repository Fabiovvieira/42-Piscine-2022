#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size)
{
    int a;
    int count;
    int i=0;
    while (i < size)
    {
        count = i + 1;
        while(count < size)
        {
            if (tab[i]>tab[count])
            {
                a=tab[count];
                tab[count]=tab[i];
                tab[i]=a;
            }
            count ++;
        } 
        i++;
    }
}

int main(void)
{
    int vec[5] = {6,4,1,0,2};
    int si = 5;
    // int vec[4] = {1,2,3,4};
    // int si = 4;
    // int vec[1] = {1};
    // int si = 1;
    printf("%d, %d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3], vec[4]); 
    ft_sort_int_tab(&vec,si);
    printf("%d, %d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3], vec[4]); 
    // printf("%d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3]); 
    // ft_sort_int_tab(&vec,si);
    // printf("%d, %d, %d, %d", vec[0], vec[1], vec[2], vec[3]); 
    // printf("%d", vec[0]); 
    // ft_sort_int_tab(&vec,si);
    // printf("%d", vec[0]); 
}