/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:20:24 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 20:49:46 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	value;

	value = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index > 1)
	{
		value = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (value);
	}
	return (value);
}
