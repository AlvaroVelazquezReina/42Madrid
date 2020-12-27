
#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int prueba)
{
    if (prueba >= 10)
    {
        ft_putnbr(prueba / 10);
        ft_putnbr(prueba % 10);
    }
    if (prueba < 10)
    {
        ft_putchar(prueba + 48);
    }
}

int main(void)
{
    int b;

	ft_ft(&b);
	ft_putnbr(b);
	return(0);
}