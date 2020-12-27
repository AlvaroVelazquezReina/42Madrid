
#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 88;
}

void escribir(char c)
{
    write(1, &c, 1);
}

void ft_prueba(int nb)
{
    if (nb < 10)
    {
        escribir (nb + 48);
    }
    if (nb >= 10)
    {
        ft_prueba(nb / 10);
        ft_prueba(nb % 10);
    }
}
int main(void)
{
    int a;
    a = 2;
    int *nbr;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;

    nbr = &a;
    nbr2 = &nbr;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;

    ft_ultimate_ft(&nbr8);
    ft_prueba(a);
    return(0);
}