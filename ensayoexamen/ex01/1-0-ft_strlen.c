/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: propietario <propietario@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 10:14:19 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/18 08:50:08 by propietario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while(str[i])
        i++;
    return(i);
}

int main(void)
{
    char str[] = "viva";
    printf("%d", ft_strlen(str));
    return(0);
}