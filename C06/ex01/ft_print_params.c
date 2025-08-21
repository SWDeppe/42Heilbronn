/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:56:49 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 23:05:57 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	str_len;

	i = 1;
	while (i != argc)
	{
		str_len = 0;
		while (argv[i][str_len] != '\0')
			str_len++;
		write(1, argv[i], str_len);
		write(1, "\n", 1);
		i++;
	}
}
