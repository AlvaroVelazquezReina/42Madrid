/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:11:44 by avelazqu          #+#    #+#             */
/*   Updated: 2020/11/29 17:22:56 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int px;
	int py;

	px = 0;
	py = 0;
	while (py < y)
	{
		while (px < x)
		{
			if ((px == 0 && py == 0) ||
				(px == x - 1 && py == y - 1 && py != 0 && px != 0))
				ft_putchar('/');
			else if ((px == 0 && py == y - 1) || (px == x - 1 && py == 0))
				ft_putchar('\\');
			else if (px > 0 && px < x - 1 && py > 0 && py < y - 1)
				ft_putchar(' ');
			else
				ft_putchar('*');
			px++;
		}
		px = 0;
		ft_putchar('\n');
		py++;
	}
}
