/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mispruebas08.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:58:24 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 12:04:26 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strlowcase(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return(str);
}

int main(void)
{
    char str[] = "HoLaHAIhasASDFFASDFFASDFASDFASDFASFld";

    printf("%s", ft_strlowcase(str));

    return(0);
}