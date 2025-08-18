/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 05:56:14 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/13 20:53:50 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	__ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{	
		if ((*(str + i) > 'z' || *(str + i) < 'A'))
			return (0);
		if ((*(str + i) < 97 && *(str + i) > 90))
			return (0);
		i++;
	}
	return (1);
}

int	_ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*(str + i) == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if ((*(str + i) < 'A' || *(str + i) > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int		i;
	char	temp[3];

	i = 0;
	while (*(str + i) != '\0')
	{
		temp[1] = *(str + i);
		if (__ft_str_is_alpha(&temp[1]) && _ft_str_is_uppercase(&temp[1]))
		{
			*(str + i) = *(str + i) + 32;
		}
		i++;
	}
	return (str);
}
