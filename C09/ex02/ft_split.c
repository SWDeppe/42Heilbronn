/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:22:44 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/17 10:38:12 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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

int	ft_is_same_str(char *checked_part, char *charset)
{
	int	i;
	int y;
	int out;

	i = 0;
	out = 0;
	while(i <= ft_strlen(charset))
	{
		y = 0;
		while(y <= ft_strlen(charset))
		{
			if(checked_part[i - 1] == charset[y])
				return (1);
			y++;
		}
		i++;
	}
	return (out);
}


char **ft_split(char *str, char *charset)
{
	char	**splited_str_arr;
	char	*checked_part;
	int		parts_count;
	int		i;
	int		y;

	i = 0;
	checked_part = (char*)malloc(ft_strlen(charset) + 1);
	parts_count = 1;
	
}


int main()
{
	char **arr;
	char *str = "fsd.,lfgd .dgdgf .";
	char *charset = ".,";

	arr = ft_split(str, charset);
	//write(1, arr[1], 3);
	/*
	for(int i = 0; i < 1; i++)
	{
		write(1, arr[i], ft_strlen(arr[i]) - 1);
	}*/
}