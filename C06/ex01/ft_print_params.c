/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:56:49 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 16:11:23 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int strLen;

	i = 1;
	while(i != argc)
	{
		strLen = 0;
		while (argv[i][strLen] != '\0')
		{
			strLen++;
		}
		write(1, argv[i], strLen);
		write(1, "\n", 1);
		i++;
	}
}
