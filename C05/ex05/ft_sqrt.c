/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:37:50 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 11:36:02 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int resultado;

	resultado = 1;
	while ((nb > 0) && (resultado <= 46340))
	{
		if (nb == resultado * resultado)
			return (resultado);
		if (nb < resultado * resultado)
			return (0);
		resultado++;
	}
	return (0);
}
