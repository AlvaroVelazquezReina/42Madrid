/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-repeat_alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 10:51:30 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 12:49:39 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char letra)
{
	int	repeat;

	if (letra >= 'A' && letra <= 'Z')
		repeat = letra - 'A' + 1;
	else if (letra >= 'a' && letra <= 'z')
		repeat = letra - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int argc, char **argv)
{
	int	repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
