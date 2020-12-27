/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba06.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:25:25 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 16:50:24 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int x;
    int y;

    x = 0;
    while(x <= 98)
    {
        y = x +1;
        while (y <= 99)
        {
            ft_putchar(x / 10 + '0');
            ft_putchar(x % 10 + '0');
            ft_putchar(' ');
            ft_putchar(y / 10 + '0');
            ft_putchar(y % 10 + '0');
            if (x != 98)
                write(1 , ", ", 2);
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