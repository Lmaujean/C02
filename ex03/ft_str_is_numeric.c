/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:45:14 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/21 14:09:57 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int chiffre;

	i = 0;
	chiffre = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			chiffre = 0;
		}
		else if (str[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (chiffre);
}
