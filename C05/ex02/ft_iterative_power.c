/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:44:20 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 09:55:41 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int resultado;

	if (nb == 1 || power == 0 || (nb == 0 && power == 0))
		return (1);
	if (power < 0)
		return (0);
	resultado = 1;
	while (power > 0)
	{
		resultado = (nb * resultado);
		power--;
	}
	return (resultado);
}
