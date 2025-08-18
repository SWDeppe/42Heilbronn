/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 03:54:50 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/18 22:19:16 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	pers_pow(int b, int p)
{
	int			i;
	long int	value;

	i = 1;
	value = 1;
	if(p == 0)
		return (1);
	while (i <= p)
	{	
		value = value * b;
		i++;
	}
	return (value);
}

int base_to_int(char *base, int *valide)
{
	int i;
	int checki;
	int checky;
	
	i = 0;
	checki = 0;
	*valide = 1;
	while(*(base + i) != '\0')
		i++;
	while (checki < i)
	{
		checky == 0;
		while(checky < i)
		{
			if (*(base + checki) == *(base + checky) && checki != checky)
				*valide = -1;
			checky++;
		}
		checki++;
	}
	return (i);
}

void	write_nbr(int num, int *index, char *base)
{
	long int 	tmp;
	char	output;
	int		valide;
	int 	int_base;
	
	tmp = num;
	int_base = base_to_int(base, &valide);
	valide = 0;
	while (*index != 0)
	{
		output = tmp / pers_pow(int_base, *index - 1);
		tmp = tmp % pers_pow(int_base, *index - 1);
		write(1, &(*(base + output)), 1);
		*index = *index - 1;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			index;
	long int	tmp;
	int			valide;

	index = 100 / base_to_int(base, &valide);
	tmp = nbr;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp = tmp * -1;
		index++;
	}
	if (valide == -1)
		return;
	while (index > 0)
	{
		if (tmp / pers_pow(base_to_int(base, &valide), index - 1) != 0)
			write_nbr(tmp, &index, base);
		index--;
	}
}

int main()
{
	int valide;
	ft_putnbr_base(11899, "0123456789hihhi");
}
