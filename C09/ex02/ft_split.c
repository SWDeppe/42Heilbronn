/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:22:44 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/20 04:46:02 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char **ft_split(char *str, char *charset)
{
	char **splited;
	
	int i = 1;
	int j;
	int count_words = 1;
	while (str[i] != 0)
	{
		j = 0;
		while(str[j] != 0)
		{
			if (str[i] == charset[j])
			{
				while(str[i] == charset[j] )
					i++;
				count_words++;
			}
			
			j++;
		}
	}
	(*splited) = malloc(sizeof(str*) * count_words);
	int begin = 0;
	while (str[i] != 0)
	{
		j = 0;
		while(str[j] != 0)
		{
			if (str[i] == charset[j] || str[i - 1] == charset[j])
			{
				
			}
			j++;
		}
	}
	if (begin == 0)
		return (NULL);
}

