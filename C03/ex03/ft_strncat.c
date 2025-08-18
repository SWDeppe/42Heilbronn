/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 05:13:23 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/11 05:50:49 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				destlen;

	i = 0;
	destlen = 0;
	if (nb == 0)
		return (dest);
	while (*(dest + destlen) != '\0')
	{
		destlen++;
	}
	while (*(src + i) != '\0' && i < nb)
	{
		*(dest + destlen + i) = *(src + i);
		i++;
	}
	*(dest + destlen + i) = '\0';
	return (dest);
}
