/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0-ft_countdown.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:52:58 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 15:15:07 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char numero;
    numero = '9';

    while (numero >= '0')
    {
        ft_putchar(numero);
        numero--;
    }
    ft_putchar('\n');
    return(0);
}