#include<stdio.h>
#include<unistd.h>
int	ft_isspace(char *str, int *i)
{
	int	sinal;

	sinal = 0;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <=13))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sinal++;
		(*i)++;
	}
	return (sinal);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strpot(char *str, int  *i)
{
	int a;
	int pot;

	a = 0;
	pot = 1;
	while (str[*i + a] >= '0' && str[*i + a] <= '9')
	{
		pot = pot * 10;
		a++;
	}
		
	return (pot/10);
}


int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	pot;
	int	res;

	pot = 1;
	res = 0;
	i= 0;
	sinal = ft_isspace(str, &i);
	pot = ft_strpot(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = pot * (str[i] - 48) + res;
		pot = pot / 10;
		i++;
	}
	if (sinal % 2 == 0)
		return (res);
	else 
		return (-res);
}

int main(void)
{
    printf("%d\n", ft_atoi(" --+-+45 67"));
    printf("%d\n", ft_atoi(" --+-+-+12a34ab567"));
    printf("%d\n", ft_atoi(" -+--+1234567"));
    return(1);
}
