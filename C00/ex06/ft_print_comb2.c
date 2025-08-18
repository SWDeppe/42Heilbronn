/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 09:57:58 by sdeppe            #+#    #+#             */
/*   Updated: 2025/07/31 16:33:00 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int num1, int num2);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 97)
	{
		while (num2 <= 99)
		{
			print_num(num1, num2);
			num2++;
			write(1, ", ", 1);
		}
		num2 = (num1 + 2);
		num1++;
	}
	write(1, "98 99", 5);
}

void	print_num(int num1, int num2)
{
	char	digit1;
	char	digit2;
	char	digit3;
	char	digit4;

	digit1 = (num1 / 10) + 48;
	digit2 = (num1 % 10) + 48;
	digit3 = (num2 / 10) + 48;
	digit4 = (num2 % 10) + 48;
	write(1, &digit1, 1);
	write(1, &digit2, 1);
	write(1, " ", 1);
	write(1, &digit3, 1);
	write(1, &digit4, 1);
}
