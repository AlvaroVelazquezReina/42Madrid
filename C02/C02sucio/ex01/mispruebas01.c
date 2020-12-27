/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mispruebas01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 09:24:12 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 17:36:30 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char  *src, unsigned int n)
{
    unsigned int i;
    i = 0;

    while(src != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
    return(dest);
}

int main (void)
{
    char inicio[] = "hola";
    char destino[] = "adio";

    printf(" %s ", destino);
    printf(" %s ", ft_strncpy(destino, inicio, 10));
    printf(" %s ", destino);
}