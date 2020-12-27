
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char numero1;
	char numero2;
	char numero3;

	numero1 = '0';
	while (numero1 <= '7')
	{
		numero2 = numero1 + 1;
		while (numero2 <= '8')
		{
			numero3 = numero2 + 1;
			while (numero3 <= '9')
			{
				ft_putchar(numero1);
				ft_putchar(numero2);
				ft_putchar(numero3);
				if (numero1 != '7')
				{
					write(1, ", ", 2);
				}
			numero3++;
			}
		numero2++;
		}
	numero1++;
	}
}

int main(void)
{
	ft_print_comb();
	return(0);
}