/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maspruebas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:47:43 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/15 13:05:24 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    i = 0;
    while (argv[0][i])
    {    
        write(1, &argv[0][i], 1);
        i++;
    }
    write (1, "\n", 1);
}