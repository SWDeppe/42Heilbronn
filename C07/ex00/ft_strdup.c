/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:13:54 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 22:05:57 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*ptr;
	int		i;

	src_len = 0;
	while (*(src + src_len) != '\0')
	{
		src_len++;
	}
	ptr = malloc(src_len + 1);
	if (ptr == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < src_len)
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
