/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 05:12:57 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/17 15:12:56 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n);

char	*ft_strstr(char *str, char *to_find)
{
	int	to_find_length;
	int	i;

	to_find_length = 0;
	i = 0;
	if (*(to_find) == '\0')
		return (str);
	while (*(to_find + to_find_length) != '\0')
	{
		to_find_length++;
	}
	while (*(str + i) != '\0')
	{	
		if (ft_strncmp(str + i, to_find, to_find_length) == 0)
			return (str + i);
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && i + 1 < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}	
	if (*(s1 + i) != *(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	return (0);
}

