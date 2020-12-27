/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:34:32 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/16 09:53:38 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
