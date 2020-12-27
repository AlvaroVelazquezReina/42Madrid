/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 09:08:17 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 09:12:17 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int x;
    int y;

    x = argc - 1;
    if ((argc > 1) && (x > 0))
    {
        y = 0;
        while (argv[x][y])
        {
            ft_putchar(argv[x][y]);
            y++;
        }
        x--;
        ft_putchar('\n');
    }
    if (argc == 1)
        ft_putchar('\n');
    return(0);
}