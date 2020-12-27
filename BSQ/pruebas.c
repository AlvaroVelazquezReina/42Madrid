/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:37:30 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/15 18:07:34 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char buf[1000000];
    ssize_t nr_bytes;

//    if (argv < 2)
//        write(1, "error, argumentos insuficientes\n", 31);

    fd = open("tablero.txt", O_RDONLY);

    if(fd == -1)
    {
        write(1, "Error al abrir el archivo\n", 27);
    }
    else
    {
        read(fd, buf, 1000000);
        close(fd);

        if(nr_bytes == 0)
        {
            printf("archivo vacio \n");
        }
        else
        {
            printf("El numero de caracteres es %d , contenido: %s \n", (int)nr_bytes, buf);
        }
    }
    return 0;
}