/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:30:56 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/07 19:26:27 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	__ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;

	i = 1;
	while (i < size)
	{
		y = 1;
		while (y < size)
		{
			if (tab[y] > tab[y + 1])
				__ft_swap(&tab[y], &tab[y + 1]);
			y++;
		}
		i++;
	}
}
