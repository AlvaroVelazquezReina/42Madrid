/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:09:46 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 14:37:55 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[i] == '\0') // por si es el final
        return (&str[i]);
    while (str[i]) //mientras estemos dentro
    {
        j = 0;
        while ((to_find[j] && str[i + j] == to_find[j])) // mientras sea igual y lo siguiente
        {
            if (to_find[j + 1] == '\0') // si no es el final
                return (&str[i]); //retorname el puntero de lo mismo
            j++;  // loop
        }
        i++;  //loop
    }
    return(0); //sin esto falla.
}

int main()
{
    char hola[] = "Wasdf3Schola1111";
    char adios[] = "hola";

    printf("%s", ft_strstr(hola, adios));

    return(0);
}
