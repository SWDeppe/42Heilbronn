/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 03:54:50 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 16:09:26 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int base_to_int(char *base)
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
	check_valide_base();
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nbr >= 10)
	{	
		ft_putnbr_base(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int main()
{
	int valide;
	ft_putnbr_base(11899, "0123456789");
}
