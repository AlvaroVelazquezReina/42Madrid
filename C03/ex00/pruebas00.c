/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:07:27 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/10 09:41:25 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;

    return(s1[i] - s2[i]);
}

int main(void)
{
    char a[] = "b";
    char b[] = "ba";

    printf("%d", ft_strcmp(a, b));
    return(0);
}

