/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 05:56:51 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/18 17:12:48 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	_pers_pow(int b, int p)
{
	int	i;
	int	value;

	i = 1;
	value = 1;
	if (p == 0)
		return (1);
	while (i <= p)
	{	
		value = value * b;
		i++;
	}
	return (value);
}

void	write_nbr(int num, int *index, int neg)
{
	int		tmp;
	char	output;

	tmp = num;
	while (tmp != 0)
	{
		if (*index == 1)
			tmp = tmp + neg;
		output = tmp / _pers_pow(10, *index - 1) + 48;
		tmp -= tmp / _pers_pow(10, *index - 1) * _pers_pow(10, *index - 1);
		write(1, &output, 1);
		*index = *index - 1;
	}
}

void	ft_putnbr(int nb)
{
	int		index;
	int		tmp;
	int		neg;

	index = 10;
	tmp = nb;
	neg = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		tmp = tmp * -1 - 1;
		neg = 1;
	}
	while (index > 0)
	{
		if (index == 1)
			write(1, "0", 1);
		if (tmp / _pers_pow(10, index - 1) != 0)
			write_nbr(tmp, &index, neg);
		index--;
	}
}
