/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 05:06:37 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/20 15:01:31 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str2.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		write(1, (str + index), 1);
		index++;
	}
}

int	pers_pow(int b, int p)
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
		output = tmp / pers_pow(10, *index - 1) + 48;
		tmp -= tmp / pers_pow(10, *index - 1) * pers_pow(10, *index - 1);
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
		if (index == 1 && tmp / pers_pow(10, index - 1) == 0)
			write(1, "0", 1);
		if (tmp / pers_pow(10, index - 1) != 0)
			write_nbr(tmp, &index, neg);
		index--;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
