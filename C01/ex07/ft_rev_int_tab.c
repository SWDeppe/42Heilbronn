/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:47:01 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/07 19:27:26 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	_ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;

	index = 1;
	while (index < (size / 2))
	{
		_ft_swap(&tab[index], &tab[size - index]);
		index++;
	}
}
