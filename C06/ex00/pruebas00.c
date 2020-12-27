/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:17:04 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/15 12:51:24 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
    int i;
    i = 0;
    while (argv[0][i])
    {    
        ft_putchar(argv[0][i]);
        i++;
    }
    write (1, "\n", 1);
}
