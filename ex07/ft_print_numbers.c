#include <unistd.h>

void ft_putchar(char letter)
{
	write(1, &letter, 1);

}
void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i++;
	}
}

int main(void)
{
	ft_print_numbers();
}