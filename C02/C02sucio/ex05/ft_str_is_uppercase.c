/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:05:23 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 16:29:24 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] >= 'A' && str[i] <= 'Z')
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
    char *a = "";

	printf("%d", ft_str_is_uppercase(a));

	return 0;
}
