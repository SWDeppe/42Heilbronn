/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:18:22 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/16 05:02:02 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
# include <unistd.h>

void set_point(t_point *point)
{
	point->x = 4;
	point->y = 2;
}
int main(void)
{
	t_point point;
	set_point(&point);
	char out1 = point.x + 48;
	char out2 = point.y + 48;
	write(1, &out1, 1);
	write(1, &out2, 1);
	return (0);
}