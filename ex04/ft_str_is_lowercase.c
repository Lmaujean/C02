/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:12:04 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/21 14:35:08 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int alpha_min;

	i = 0;
	alpha_min = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			alpha_min = 0;
		}
		else if (str[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (alpha_min);
}
