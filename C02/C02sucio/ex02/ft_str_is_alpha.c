/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:59:25 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 16:27:17 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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

	printf("%d", ft_str_is_alpha(a));

	return 0;
}
