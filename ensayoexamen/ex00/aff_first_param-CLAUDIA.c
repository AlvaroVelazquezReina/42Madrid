/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param-CLAUDIA.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 18:25:49 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 09:00:49 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

int main(int argc, char **argv)
{
    int y;

    if(argc > 1)
    {
        while (argv[1][y])
        {
            ft_putchar(argv[1][y]);
            y++;
        }
    }
    ft_putchar('\n');
    return(0);
}