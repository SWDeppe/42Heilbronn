/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:15:34 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 17:17:49 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_sort_str_arr(char *str_arr[], int length);

int main(int argc, char *argv[])
{
	int		i;
	int	 	strLen;
	char 	**out;

	i = argc - 1;
	out = argv;
	ft_sort_str_arr(out, argc);

	while(i != 0)
	{
		strLen = 0;
		while (out[i][strLen] != '\0')
		{
			strLen++;
		}
		write(1, out[i], strLen);
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

void ft_sort_str_arr(char *str_arr[], int length)
{
	int i;
	int y;
	char *tmp;

	i = 1;
	y = 1;
	while (i < length)
	{
		y = 1;
		while (y < length - 1)
		{
			if ((ft_strcmp(str_arr[y], str_arr[y + 1]) < 0) )
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