/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:11:03 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/18 13:39:55 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < size - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (*(src + i) != '\0')
		i++;
	return (i);
}
