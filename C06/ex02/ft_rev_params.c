/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:12:14 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 23:06:51 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	str_len;

	i = argc - 1;
	while (i != 0)
	{
		str_len = 0;
		while (argv[i][str_len] != '\0')
			str_len++;
		write(1, argv[i], str_len);
		write(1, "\n", 1);
		i--;
	}
}
