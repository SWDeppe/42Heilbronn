/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:48:06 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/18 13:39:25 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	__ft_char_is_lowercase(char str)
{
	if (str > 'z' || str < 'a')
		return (0);
	return (1);
}

int	ft_char_is_alpha(char str)
{	
	if ((str > 'z' || str < 'A'))
		return (0);
	if ((str < 97 && str > 90))
		return (0);
	return (1);
}

int	ft_char_is_num(char str)
{	
	if ((str < '0' || str > '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (__ft_char_is_lowercase(*(str + i))
			&& !ft_char_is_num(*(str + i - 1)))
		{
			*(str + i) -= 32;
			i ++;
		}
		while (ft_char_is_alpha(*(str + i)))
		{
			if (!(__ft_char_is_lowercase(*(str + i))) && i != 0)
				*(str + i) += 32;
			i++;
		}
		i++;
	}
	return (str);
}
