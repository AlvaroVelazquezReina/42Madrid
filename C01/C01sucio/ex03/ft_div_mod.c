

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 20;
    b = 2;

    ft_div_mod(a, b, &div, &mod);
    printf("%d\n", div);
    printf("%d", mod);
    return(0);
}

