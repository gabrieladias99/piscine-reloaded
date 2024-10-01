void    ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main(void)
{
    int c = 42;
    int d = 10;
    int *a = &c;
    int *b = &d;
    printf("a=%d, b=%d\n",*a,*b);
    ft_swap(a,b);
    printf("a=%d, b=%d\n",*a,*b);
}