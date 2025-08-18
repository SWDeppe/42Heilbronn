/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:32:03 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/15 21:26:45 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*arr_ptr;
	int	i;

	length = 0;
	while (length < max - min)
	{
		length++;
	}
	arr_ptr = malloc(4 * length);
	if (arr_ptr == 0 || length <= 0)
	{
		return (0);
	}
	i = 0;
	while (length != i)
	{
		*(arr_ptr + i) = min + i;
		i++;
	}
	return (arr_ptr);
}
