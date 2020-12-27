/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 19:32:57 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 16:30:16 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_atoi(char *str)
{
    int ret;
    int sign;
    ret = 0;
    sign = 1;
    while ((*str == ' ') || (*str >= 9 && *str <= 13))
        ++str;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while ('0' <= *str && *str <= '9')
    {
        ret *= 10;
        ret += (sign * (*str - 48));
        str++;
    }
    return (ret);
}
int main(void)
{
    printf("%d\n",  ft_atoi("-+-+-+-ksfdh123456"));
    printf("%d\n",  ft_atoi("123Three45678"));
    printf("%d\n",  ft_atoi("Hello world"));
    printf("%d\n",  ft_atoi("+42 BLAH!"));
    printf("%d\n",  ft_atoi("-42"));
    printf("%d\n",  ft_atoi("         +42"));
    printf("%d\n",  ft_atoi("\t\n\v\f\r 42"));
    printf("%d\n",  ft_atoi("123456"));
    printf("%d\n",  ft_atoi(" ---+--+1234ab567"));
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
