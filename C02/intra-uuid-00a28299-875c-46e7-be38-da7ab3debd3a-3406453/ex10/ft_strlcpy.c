/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:42:58 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 15:11:51 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int resultado;

	i = 0;
	resultado = 0;
	while (src[resultado] != '\0')
	{
		resultado++;
		if (size != 0)
		{
			while (src[i] != '\0' && (i < size - 1))
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (resultado);
}
