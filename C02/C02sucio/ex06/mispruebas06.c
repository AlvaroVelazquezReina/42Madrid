/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mispruebas06.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:02:31 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 11:07:18 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str)
{
    int i;
    i = 0;

    while (str[i] >= 32 && str[i] <= 126)
    {
        i++;
    }
    if (str[i] == '\0')
        return (1);
    else 
        return (0);
}

int main (void)
{
    char *a = "a6sd5f54a";

    printf("%d", ft_str_is_printable(a));

    return(0);
}