/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:42:31 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 15:45:02 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_pucthar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char number;
    number = '0';

    while (number <= '9')
    {
        ft_pucthar(number);
        number++;
    }
}

int main(void)
{
    ft_print_numbers();
    return(0);
}