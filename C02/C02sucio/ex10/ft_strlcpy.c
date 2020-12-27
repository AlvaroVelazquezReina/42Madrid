/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:42:58 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 09:01:29 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int resultado;

	i = 0;
    resultado = 0;

    while (src[resultado] != '\0')
    
        resultado++;
        if (size != 0)
        {
            while (src[i] != '\0' && (i < size - 1))
            {
                dest[i] = src[i];
                i++;
            }
            dest[i] = '\0';
        }
    return(resultado);
}

int main()
{
	char src[] = "hola";
    char dest[10];

    int size = strlcpy(dest,src,10);
    printf("%d\n", size);
    printf("%s\n", dest);

	return (0);
}

