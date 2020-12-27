
#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
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

    ft_swap(&a ,&b);
    printf("%d\n", b);
    return(0);
}
