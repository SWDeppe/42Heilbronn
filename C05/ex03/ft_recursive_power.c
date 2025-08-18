/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:47:42 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 11:16:47 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	value;

	value = nb;
	if(power == 0)
		return (1);
	else if(power < 0)
		return (0);
	if (power > 1)
	{
		value = ft_recursive_power(value, power - 1);
		return (value * nb);
	}
	return (value);
}