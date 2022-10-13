#include "ft_point.h"
#include<stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	point.x = 10;
	point.y = 20;
	printf("x = %d | y = %d \n", point.x, point.y);
	set_point(&point);
	printf("x = %d | y = %d \n", point.x, point.y);
	return (0);
}
