/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:40:47 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 09:03:18 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
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
	char str_src[]	= "Hello";
	char str_dest[] = "Salut";
	
	printf("%s", str_dest);
	printf(" %s ", ft_strcpy(str_dest, str_src));
	printf(" %s ", str_dest);

	return (0);
}

