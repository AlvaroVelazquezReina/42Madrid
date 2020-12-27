/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:03:26 by tlufulua          #+#    #+#             */
/*   Updated: 2020/12/06 17:52:04 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_tablero(void);

void	ft_condiciones(void);

void	ft_print(void)
{
	char	tab[4][4];
	int 	n;
	int 	i;

	n = 0;
	while (n <= 3)
	{
		i = 0;
		while (i <= 3)
		{
			write(1, &tab[n][i], 1);
			write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
	}
}
