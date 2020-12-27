/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:42:04 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 16:22:37 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			escribir((x / 10) + '0');
			escribir((x % 10) + '0');
			escribir(' ');
			escribir((y / 10) + '0');
			escribir((y % 10) + '0');
			if (x != 98)
			{
				escribir(',');
				escribir(' ');
			}
			y++;
		}
		x++;
	}
}

int main(void)
{
    ft_print_comb2();
    return(0);
}