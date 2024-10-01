int ft_iterative_factorial(int nb)
{
	int	i;
	int result;

	i = 1;
	result = 1;

	if (nb < 0)
		return 0;
	while(i <= nb)
	{
		result = result * i;
		i++;
	}
	return result;
}

#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(6));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(-1));
}