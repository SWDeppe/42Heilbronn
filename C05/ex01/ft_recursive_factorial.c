/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:34:51 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 20:48:51 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	out;

	out = 1;
	if (nb < 0)
		return (0);
	else if (nb > 1)
	{
		out = ft_recursive_factorial(nb - 1);
		return (nb * out);
	}
	return (out);
}
