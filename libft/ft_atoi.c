/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orantane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:36:30 by orantane          #+#    #+#             */
/*   Updated: 2019/11/02 21:47:53 by orantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int r;
	int s;
	int i;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == '+' || str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	if ((str[i] > 47 && str[i] < 58 && str[i - 1] == 43 && str[i - 2] == 43) ||
		(str[i] > 47 && str[i] < 58 && str[i - 1] == 45 && str[i - 2] == 43))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (s * r + '\0');
		else
			r = r * 10 + str[i++] - '0';
	}
	return (s * r);
}
