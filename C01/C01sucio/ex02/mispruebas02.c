
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char d)
{
    write(1, &d, 1);
}

void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int a;
    int b;
    int *a1;
    int *b1;

    a = 33;
    a1 = &a;

    b = 77;
    b1 = &b;

    ft_swap(&a, &b);
    ft_putchar(&b);
    return(0);
}