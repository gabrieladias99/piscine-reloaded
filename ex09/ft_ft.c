#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a = 0;
	int *b = &a;
	ft_ft(b);
	printf("%d",a);
}