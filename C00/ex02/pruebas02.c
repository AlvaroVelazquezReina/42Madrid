/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:37:12 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 15:41:43 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char letra;
    letra = 'z';

    while (letra >= 'a')
    {
        ft_putchar(letra);
        letra --;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return(0);
}