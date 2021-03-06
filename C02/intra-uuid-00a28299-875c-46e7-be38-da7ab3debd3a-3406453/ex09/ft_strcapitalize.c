/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelazqu <avelazqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:05:51 by avelazqu          #+#    #+#             */
/*   Updated: 2020/12/09 17:50:46 by avelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 65 || (str[i - 1] > 90 && str[i - 1] < 97) ||
			str[i - 1] > 122) && (str[i - 1] < 48 || str[i - 1] > 57) &&
				(str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if (((str[i - 1] >= 48 && str[i - 1] <= 57) || (str[i - 1] >= 65 &&
			str[i - 1] <= 90) || (str[i - 1] >= 97 && str[i - 1] <= 122)) &&
				(str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
