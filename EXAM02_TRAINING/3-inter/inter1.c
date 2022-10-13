#include<unistd.h>

void    inter(char *fi, char *se)
{       
        int i;
	int j;
	int flag;

	flag = 0;	
        i = 0;
        while (fi[i])
        {
                j = i-1;
                while(j >= 0)
                {
                        if(fi[i]==fi[j])
			{
				flag = 1;
				break;
			}
                        j--;
                }
                j = 0;
                while(se[j] != '\0' && flag == 0)
                {
                        if(fi[i] == se[j])
                        {
                                write(1, &fi[i], 1);
                                break;
                        }
			j++;
                }
		flag = 0;
                i++;
        }
        write(1, "\n", 1);
}       
int     main( int c, char **v)
{       
        if (c == 3)
                inter(v[1],v[2]);
        return(0);
}
