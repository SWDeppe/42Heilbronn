/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:21:56 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 20:38:04 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	out;

	out = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		out = nb * out;
		nb -= 1;
	}
	return (out);
}
