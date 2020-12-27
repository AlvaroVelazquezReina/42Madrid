/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoidMaster.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:23:59 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/13 10:34:03 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str)
{
	int resultado;
	int is_positivo;

	resultado = 0;
	is_positivo = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_positivo++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (resultado > 0)
			resultado *= 10;
		resultado += *str - '0';
		str++;
	}
	if (is_positivo % 2 != 0 && resultado != 0)
		resultado *= -1;
	return (resultado);
}

int main () {

    printf("%d\n",  atoi("123456"));
    printf("%d\n",  atoi("123Three45678"));
    printf("%d\n",  atoi("Hello world"));
    printf("%d\n",  atoi("+42 BLAH!"));
    printf("%d\n",  atoi("-42"));
    printf("%d\n",  atoi("         +42"));
    printf("%d\n",  atoi("\t\n\v\f\r 42"));
    printf("%d\n",  atoi("123456"));
    printf("%d\n",  atoi(" ---+--+1234ab567"));
    printf("***\n");
    printf("%d\n",  atoi("123456"));
    printf("%d\n",  atoi("123Three45678"));
    printf("%d\n",  atoi("Hello world"));
    printf("%d\n",  atoi("+42 BLAH!"));
    printf("%d\n",  atoi("-42"));
    printf("%d\n",  atoi("         +42"));
    printf("%d\n",  atoi("\t\n\v\f\r 42"));
    printf("%d\n",  atoi("123456"));
    printf("%d\n",  atoi(" ---+--+1234ab567"));
    printf("***\n");

   return(0);
}
