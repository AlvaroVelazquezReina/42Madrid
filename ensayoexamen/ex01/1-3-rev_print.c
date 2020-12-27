/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-3-rev_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:12:09 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 16:34:33 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    return(i);
}

int main(int argc, char **argv)
{
    int len;

    if (argc == 2)
    {
        len = ft_strlen(argv[1]);
        while (len--)
            write(1, &argv[1][len], 1);
    }
    ft_putchar('\n');
}