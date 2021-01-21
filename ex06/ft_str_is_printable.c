/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:53:21 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/21 16:04:26 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int carac_aff;

	i = 0;
	carac_aff = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			carac_aff = 0;
		}
		i++;
	}
	return (carac_aff);
}
