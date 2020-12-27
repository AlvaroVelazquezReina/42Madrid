
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_ft(char *nbr)
{
    *nbr = 420;
    ft_putchar((*nbr / 10) + 48);
    ft_putchar((*nbr % 10) + 48);
}


int main(void)
{
    int nbr;

    ft_ft(&nbr);

}