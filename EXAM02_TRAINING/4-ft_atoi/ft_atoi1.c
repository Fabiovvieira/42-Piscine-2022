#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	sinal;
	int i;
	int res;

	res = 0;
	sinal =1;
	i=0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <=13 ))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i]== '-')
			sinal *= -1;
		i++;
	}
	while(str[i]>='0' && str[i]<='9'&& str[i]!= '0')
	{
		res = (str[i]-48) + res*10;
		i++;
	}
	return(res*sinal);

}

int	main(void)
{
	printf("%d\n", ft_atoi("12345"));
	return(0);
	
}
