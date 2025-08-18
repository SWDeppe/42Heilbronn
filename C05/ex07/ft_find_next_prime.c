/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:26:49 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 14:30:34 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int i;

	i = nb - 1;
	if(nb < 2)
		nb = ft_find_next_prime(nb + 1);
	if (nb == i)
		i++; 
	while (i > 1)
	{
		if (nb % i == 0)
			nb = ft_find_next_prime(nb + 1);
		
		i--;
	}
	return (nb);
}