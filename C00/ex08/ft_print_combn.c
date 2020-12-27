/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:56:34 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 18:01:11 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char numero1;
	char numero2;
	numero1 = '0';
	numero2 = '0';
	if (n == 3)
		numero1 = '0';
	while (numero1 <= '9')
	{
		numero2 = numero1 + 1;
		while (numero2 <= '9')
		{
			escribir(numero1);
			escribir(numero2);
			if (numero1 != '8' || numero2 != '9')
			{
				escribir(',');
				escribir(' ');
			}
			numero2++;
		}
		numero1++;
	}
}

int main(void)
{
    ft_print_combn();
    return(0);
}

