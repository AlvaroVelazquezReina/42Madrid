/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mispruebas04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:41:38 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 10:48:28 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;

    while (str[i] >= 97 && str[i] <= 122)
    {
        i++;
    }
    if (str[i] == '\0')
        return(1);
    else
        return(0);
}

int main(void)
{
    char *a = "hola";

    printf(" %d ", ft_str_is_lowercase(a));

    return(0);
}