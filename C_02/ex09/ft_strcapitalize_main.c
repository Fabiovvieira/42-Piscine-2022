#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if (str[i] >= 97 && str[i] <= 122 && flag == 0)
			{
				str[i] = str[i] - 32;
				flag = 1;
			}
			else
				flag = 1;
		}
		else
			flag = 0;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "oi, tudo bem? a42palAvras qUaRenta-e-Duas; cinquenta+e+um";
    char str1[] = "salut, -comment tu vas ??42mots quarante-deux; cinquante+et+un";
    // char str2[] = "";

    printf("%s \n", str);
    printf("%s \n", ft_strcapitalize(str));
	printf("%s \n", str1);
	printf("%s \n", ft_strcapitalize(str1));
	
	return(0);
} 
