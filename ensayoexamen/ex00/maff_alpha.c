/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0-maff_alpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:07:13 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 17:26:13 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_strlen(char *c)
{
    int i;

    i = 0;
    while (*c != '\0')
    {
        i++;
        c++;
    }
    return (i);
}

int main (int argc, char **argv)
{
    write(1, argv[1], ft_strlen(argv[1]));
    write (1, "\n", 1);
}
