/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mispruebas07.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:47:23 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 11:55:37 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return(str);
}

int main(void)
{
    char str[] = "HolaAoIaIn";
    printf("%s", ft_strupcase(str));
}
