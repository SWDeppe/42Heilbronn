/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:03:00 by sdeppe            #+#    #+#             */
/*   Updated: 2025/07/31 22:46:02 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	pers_pow(int b, int p)
{
	int	i;
	int	value;

	i = 1;
	while (i < p)
	{	
		value = value * b;
		i++;
	}
	return (b);
}

void	ft_putnbr(int nb)
{
	int		index;
	char	output[10];

	index = 10;
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	while (index > 0)
	{
		output[index] = (nb % pers_pow(10, index)) / pers_pow(10, (index - 1)) + 48;
		write(1, &output[index], 10);
		index--;
	}
	printf("%s",output);
}
