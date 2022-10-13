#include<unistd.h>



void	last_word(char *c)
{
	int i;

	i=0;
	while(c[i])
		i++;
	i--;
	while((c[i] == ' ' || c[i] == '\t')&& i>= 0)
		i--;
	while ((c[i] != ' ' && c[i] != '\t')&& i>=0)
		i--;
	i++;
	while (c[i] != ' ' && c[i] != '\t' && c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}	

int	main(int c, char **v)
{
	if (c == 2)
	{
		last_word(v[1]);
	}
	write(1, "\n", 1);
	return (0);
}

