#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;
	
	a = 10;
	printf("%d",a);
	ft_ft(&a);
	printf("%d",a);
	return(0);
}
