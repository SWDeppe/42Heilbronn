/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 06:51:18 by sdeppe            #+#    #+#             */
/*   Updated: 2025/07/31 09:14:58 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char hund, char dis, char unit);

void	ft_print_comb(void)
{
	char	hund;
	char	dis;
	char	unit;

	hund = 48;
	dis = 49;
	unit = 50;
	print(hund, dis, unit);
}

void	print(char hund, char dis, char unit)
{
	while (hund <= '7')
	{
		while (dis <= '8')
		{
			while (unit <= '9')
			{
				write(1, &hund, 1);
				write(1, &dis, 1);
				write(1, &unit, 1);
				write(1, ", ", 2);
				unit++;
			}
			dis++;
			unit = 48 + (dis - 47);
		}
		hund++;
		dis = 48 + (hund - 47);
	}
	write(1, "789", 3);
}
