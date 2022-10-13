#include<stdio.h>
#include"ft_stock_str.h"
#include <stdlib.h>

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

/*int	main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	char	**strs;
	char	*res1;
	char	*sep;
	int	size;
	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (6 + 1));
	strs[0] = "fao";
	strs[1] = "afa";
	strs[2] = "vieira";
	int				index;
	t_stock_str	*structs;

	structs = ft_strs_to_tab(size, strs);
	index = 0;
	while (index < size)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}

}*/
int	main(int c, char **v)
{
	char	**vet;

	int	i;
	i = 0;
	if(c > 1)
	{
		vet = (char **)malloc((c)*sizeof(char*));
		while(i < (c))
		{
			vet[i] = v[i];
			i++;
		}
		ft_show_tab(ft_strs_to_tab(c, vet));
	}
	return(0);
}
