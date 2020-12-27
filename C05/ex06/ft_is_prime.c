/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:12:37 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/15 19:55:41 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
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
