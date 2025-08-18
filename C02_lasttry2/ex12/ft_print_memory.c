/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:51:56 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/18 13:44:54 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	write_hex_nbr(long int num, int length)
{
	long int	tmp;
	char		output;
	char		*base;
	int			index;

	tmp = num;
	base = "0123456789abcdef";
	index = length;
	while (index > 0)
	{
		output = tmp / pers_pow(15, index - 1);
		tmp = tmp % pers_pow(15, index - 1);
		write(1, &(*(base + output)), 1);
		index--;
	}
}

void	ft_put_unprintable_char(char a)
{
	int		i;
	char	out;

	i = 0;
	if (a >= 7 && a <= 31)
	{
		write(1, ".", 2);
	}
	else
	{
		write(1, &a, 1);
	}
	i++;
}

void	write_hex_and_normal_str(void *addr, unsigned int size, int y)
{
	int	length;

	length = 0;
	while (length < 16)
	{
		if (!(length % 2))
			write(1, " ", 1);
		if ((y * 16) > size)
			write(1, "  ", 2);
		else
			write_hex_nbr((long int)(addr + length + (y * 16)), 2);
		length++;
	}
	write(1, " ", 1);
	length = y * 16;
	while (length < 16 + y * 16
		&& *((char*)addr + length) != '\0')
	{
		ft_putchar_non_printable(*((char *)addr + length));
		length++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	int_size;

	int_size = (int)size;
	if (size == 0)
		return ("");
	i = 0;
	while (i <= size / 16)
	{
		write_hex_nbr((long int)addr + i, 15);
		write(1, ": ", 1);
		write_hex_and_normal_str(((char *)addr), size, i);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}
