#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

int main(void)
{
    // Take any two strings
    char s1[] = "GeeksforGeekks";
    char s2[] = "";
    char* p;
  
    // Find first occurrence of s2 in s1
    p = ft_strstr(s1, s2);
  
    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");
  
    return (0);
}
