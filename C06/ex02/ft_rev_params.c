/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:12:14 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 16:14:48 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int strLen;

	i = argc - 1;
	while(i != 0)
	{
		strLen = 0;
		while (argv[i][strLen] != '\0')
		{
			strLen++;
		}
		write(1, argv[i], strLen);
		write(1, "\n", 1);
		i--;
	}
}
