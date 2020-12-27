/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-1-rot_13.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 13:31:38 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/17 18:06:18 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		rot_13(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		c += 13;
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	return (c);
}



int	main(int ac, char **av)
{
	if (ac == 2)
		while (*av[1])
			ft_putchar(rot_13(*av[1]++));
	ft_putchar('\n');
	return (0);
}