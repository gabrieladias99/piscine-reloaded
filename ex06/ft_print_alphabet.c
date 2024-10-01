#include <unistd.h>

void ft_putchar(char letter)
{
	write(1, &letter, 1);

}
void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

int main(void)
{
	ft_print_alphabet();
}