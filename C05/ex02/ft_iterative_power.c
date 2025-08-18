/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:43:08 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 10:46:49 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int b, int p)
{
	int	i;
	int	value;

	i = 1;
	value = 1;
	if(p == 0)
		return (1);
	if(p < 0)
		return (0);
	while (i <= p)
	{	
		value = value * b;
		i++;
	}
	return (value);
}
