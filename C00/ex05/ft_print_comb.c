/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:08:38 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 16:01:04 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char numero1;
	char numero2;
	char numero3;

	numero1 = '0';
	while (numero1 <= '9')
	{
		numero2 = numero1 + 1;
		while (numero2 <= '9')
		{
			numero3 = numero2 + 1;
			while (numero3 <= '9')
			{
				escribir(numero1);
				escribir(numero2);
				escribir(numero3);
				if (numero1 != '7')
					write(1, &", ", 2);
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