/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 23:55:05 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/15 21:53:29 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		index++;
	}
	return (index);
}

void	write_str_arr(int size, char **strs, char *sep, char *out)
{	
	int	i;
	int	y;
	int	r;

	i = 0;
	y = 0;
	r = 0;
	while (i < size)
	{
		y = 0;
		while (y < ft_strlen(*(strs + i)))
		{
			*(out + r) = strs[i][y];
			y++;
			r++;
		}
		y = 0;
		while (y < ft_strlen(sep) && i + 1 < size)
		{
			*(out + r) = sep[y];
			y++;
			r++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		str_len;
	char	*out;

	str_len = 0;
	i = 0;
	while (i < size)
	{
		str_len += ft_strlen(*(strs + i)) + ft_strlen(sep);
		i++;
	}
	out = malloc(str_len + 1);
	write_str_arr(size, strs, sep, out);
	return (out);
}
