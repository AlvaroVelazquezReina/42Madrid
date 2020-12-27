
#include <unistd.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

void	escribir(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		escribir(nb + 48);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main(void)
{
	int b;

	ft_ft(&b);
	ft_putnbr(b);
	return(0);
}

