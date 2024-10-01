int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return 0;
	if (nb == 0)
		return 1;

	return nb * ft_recursive_factorial(nb - 1);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n",ft_recursive_factorial(4));
	printf("%d\n",ft_recursive_factorial(6));
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(-1));
}