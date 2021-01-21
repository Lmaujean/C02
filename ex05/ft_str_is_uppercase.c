/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:37:20 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/21 16:03:17 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int carac_maj;

	i = 0;
	carac_maj = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			carac_maj = 0;
		}
		i++;
	}
	return (carac_maj);
}
