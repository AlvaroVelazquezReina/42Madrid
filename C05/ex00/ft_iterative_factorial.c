/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 09:23:37 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/15 19:07:27 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int valor;

	valor = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		valor = valor * nb;
		nb--;
	}
	return (valor);
}
