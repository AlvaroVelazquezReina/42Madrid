/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 20:05:19 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 09:49:18 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int contador;

	contador = 2;
	if (nb < 2)
		return (0);
	while (contador < nb)
	{
		if (nb % contador == 0)
			return (0);
		contador++;
	}
	return (1);
}
