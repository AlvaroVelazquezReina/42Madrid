/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mispruebas00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 09:05:31 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/11 12:28:04 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
	char string_inicio[] = "Hola";
	char string_destino[] = "Adio";

	printf(" %s ", string_destino);
	printf(" %s ", ft_strcpy(string_destino, string_inicio));
	printf(" %s ", string_destino);

	return(0);
}
