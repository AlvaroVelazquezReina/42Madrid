/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-2-first_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:19:48 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 15:26:09 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
            argv[1]++;
        while (*argv[1] != '\0' && (*argv[1] != ' ' && *argv[1] != '\t'))
			write(1, argv[1]++, 1);
	}
	write(1, &"\n", 1);
	return (0);
}