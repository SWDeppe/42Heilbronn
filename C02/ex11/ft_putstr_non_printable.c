/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:28:26 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/18 16:37:32 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[2];

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= 31 || *(str + i) == 127)
		{
			write(1, "\\", 1);
			if ((*(str + i)) / 16 < 10)
				hex[0] = ((*(str + i)) / 16) + 48;
			else
				hex[0] = ((*(str + i)) / 16) + 87;
			if ((*(str + i)) % 16 < 10)
				hex[1] = ((*(str + i)) % 16) + 48;
			else
				hex[1] = ((*(str + i)) % 16) + 87;
			write(1, hex, 2);
		}
		else
		{
			write(1, (str + i), 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char *str = "Ola\nesta bem?";
// 	ft_putstr_non_printable(str);
// } 