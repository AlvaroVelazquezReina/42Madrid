/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 10:00:34 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 17:59:53 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rotone(char *s)
{
    while (*s)
    {
        if((*s >= 'A' && *s<= 'Y') ||(*s >= 'a' && *s<= 'y'))
            ft_putchar(*s + 1);
        else if ((*s == 'Z') || (*s == 'z'))
            ft_putchar(*s - 25);
        else
            ft_putchar(*s);
        s++;
    }
}

int     main(int argc, char **argv)
{
    if(argc == 2)
    {
        rotone(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}