/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condiciones.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:34:35 by tlufulua          #+#    #+#             */
/*   Updated: 2020/12/06 18:41:50 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void	ft_tablero(void);

void	ft_condiciones(void)
{
	char	tab[4][4];
	int		n;
	char	ColUp[4] = {2, 3, 3, 1};
	char	ColDown[4] = {3, 1, 2, 3};
	char	RowLeft[4] = {2, 1, 2, 2};
	char	RowRight[4] = {1, 4, 2, 3};
	


////// cuatros /////
	n = 0;	
	if (RowRight[n] == 1)
	{
		tab[n][0] = '0';
		tab[n][1] = '0';
		tab[n][2] = '0';
		tab[n][3] = '4';
		
	}
	n = 3;
	if (ColDown[n] == 3)
	{
		tab[n][0] = '0';
		tab[n][1] = '4';
		tab[n][2] = '0';
		tab[n][3] = '0';
	}

//pintamos el ultimo 4 (cuando deberia ser recursivo)
	n = 2;
	if (RowRight[n] == 2 )
	{
		tab[n][0] = '0';
		tab[n][1] = '0';
		tab[n][2] = '4';
		tab[n][3] = '0';
	}
// del 1 al 4
	n = 0;
	while (n <=3)
	{
		if (RowLeft[n] == 1 && RowRight[n] == 4)
		{
			tab[n][0] = '4';
			tab[n][1] = '3';
			tab[n][2] = '2';
			tab[n][3] = '1';
		}
		if (ColUp[n] == 1 && ColDown[n] == 4)
		{
			tab[0][n] = '4';
			tab[1][n] = '3';
			tab[2][n] = '2';
			tab[3][n] = '1';
		}
		if (ColDown[n] == 1 && ColUp[n] == 4)
		{
			tab[0][n] = '1';
			tab[1][n] = '2';
			tab[2][n] = '3';
			tab[3][n] = '4';
		}
		if (RowRight[n] == 1 && RowLeft[n] == 4)
		{
			tab[n][0] = '1';
			tab[n][1] = '2';
			tab[n][2] = '3';
			tab[n][3] = '4';
		}
		
		n++;
	}
}
