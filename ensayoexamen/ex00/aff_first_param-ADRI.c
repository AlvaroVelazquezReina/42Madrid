/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 18:11:36 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 18:12:32 by avelazqu         ###   ########.fr       */
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
