#include<stdlib.h>

int	ft_abs(int start, int end)
{
	if (start>=end)
	{
		return(start-end);
	}
	else
		return(end - start);
}


int     *ft_range(int start, int end)
{
	int len;
	int *arr;
	int i = 0;
	len = ft_abs(start, end);
	arr = (int*)malloc((len+1)*sizeof(int));
	if(!arr)
	{
		return(0);
	}
	if (len == 0)
		arr[0] = start;
	if(end > start)
	{	
		while(i<len)
		{
			arr[i] = start+i;
			i++;
		}
	}
	if (end < start)
	{
	        while(i<len)
                {
                        arr[i] = start-i;
                        i++;
                }
	}
	return(arr);
	
}
#include<stdio.h>
int        main(void)
{
    int *tab;
    int i = 0;
    int start = 0;
    int end = 10 ;
    int size = ft_abs(start,end) + 1;
    
    tab = ft_range(start, end);
    while(i < size)
    {
    printf("%i, ", tab[i]);
    i++;
    }
}
