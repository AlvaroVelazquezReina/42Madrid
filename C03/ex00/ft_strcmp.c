/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 20:04:44 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/12 11:45:32 by avelazqu         ###   ########.fr       */
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
    char a[] = "ab";
    char b[] = "abc";

    printf("%d", ft_strcmp(a, b));
    return(0);
}
