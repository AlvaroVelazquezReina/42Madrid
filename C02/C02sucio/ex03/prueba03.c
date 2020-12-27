/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:38:58 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 10:41:16 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        i++;
    }
    if (str[i] == '\0')
    {
        return (1);
    }
    else
    {
        return (0);
    }


}

int main(void)
{
    char *a = "110923849804362";

	printf("%d", ft_str_is_alpha(a));

	return 0;
}
