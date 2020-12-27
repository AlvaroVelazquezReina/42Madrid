/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:53:17 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/13 16:02:21 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int		tienes_signos(char *str)
{
	int i;
	int tiene_signos;

	i = 0;
	tiene_signos = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			tiene_signos = 1;
		i++;
	}
	return (tiene_signos);
}

int		caracter_repetido(char *str)
{
	int i;
	int j;
	int is_repetido;

	i = 0;
	is_repetido = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				is_repetido = 1;
			j++;
		}
		i++;
	}
	return (is_repetido);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = ft_strlen(base);
	if (size > 1 && !tienes_signos(base) && !caracter_repetido(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * -1;
		}
		if (nbr >= size)
		{
			ft_putnbr_base(nbr / size, base);
			write(1, &base[nbr % size], 1);
		}
		else
		{
			write(1, &base[nbr], 1);
		}
	}
}

void	ft_putnbr_base(int nbr, char *base);

int	 main(){

	ft_putnbr_base(165,"10");
}
