/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:49:04 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 20:14:17 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if(max - min <= 0)
	{
		*range = NULL;
		return (0);	
	}
	i = 0;
	range[0] = (int*)malloc(sizeof(int) * (max - min));
	if (*range == 0)
	{
		return (-1);
	}
	while (i < (max - min))
	{
		range[0][i] = min + i;
		i++;
	}
	
	return (max - min);
}

// int main()
// {
// 	int **range;
// 	range = malloc(8);
// 	range[0] = malloc(4 * 5);
// 	ft_ultimate_range(range, 0, 5) + 48;
// 	char out = range[0][4] + 48;
// 	write(1, &out, 1);
// }