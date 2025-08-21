/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:15:34 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 23:09:46 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_str_arr(char *str_arr[], int length);

int	main(int argc, char *argv[])
{
	int		i;
	int		str_len;
	char	**out;

	i = argc - 1;
	out = argv;
	ft_sort_str_arr(out, argc);
	while (i != 0)
	{
		str_len = 0;
		while (out[i][str_len] != '\0')
		{
			str_len++;
		}
		write(1, out[i], str_len);
		write(1, "\n", 1);
		i--;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	if (*(s1 + i) != *(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	return (0);
}

void	ft_sort_str_arr(char *str_arr[], int length)
{
	int		i;
	int		y;
	char	*tmp;

	i = 1;
	y = 1;
	while (i < length)
	{
		y = 1;
		while (y < length - 1)
		{
			if ((ft_strcmp(str_arr[y], str_arr[y + 1]) < 0))
			{
				tmp = str_arr[y];
				str_arr[y] = str_arr[y + 1];
				str_arr[y + 1] = tmp;
			}
			y++;
		}
		i++;
	}
}
