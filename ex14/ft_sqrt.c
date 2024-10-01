
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;

	while (i * i <= nb)
	{
		if(i * i == nb)
			return i;
		i++;
	}
	return 0;
}

#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_sqrt(4));
	printf("%d\n",ft_sqrt(121));
	printf("%d\n",ft_sqrt(0));
	printf("%d\n",ft_sqrt(-1));
	printf("%d\n",ft_sqrt(200));
}