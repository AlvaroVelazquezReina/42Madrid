/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 08:48:33 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/11 12:18:54 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char 	*ft_strcpy(char *dest, char *src)
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
