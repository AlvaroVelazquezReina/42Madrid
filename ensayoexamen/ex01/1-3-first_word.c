/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-3-first_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:01:40 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 16:08:11 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i++;
        while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
        {
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return(0);
}