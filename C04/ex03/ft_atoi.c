/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:54:47 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/19 16:05:06 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_negative(char *str, int *index)
{
	int	m_count;

	m_count = 0;
	while (*(str + *index) == '+' || *(str + *index) == '-')
	{
		if (*(str + *index) == '-')
			m_count++;
		*index = *index + 1;
	}
	if (m_count % 2)
		return (-1);
	else
		return (1);
}

int	numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	get_value(char *str, int *i)
{
	int	res;

	res = *(str + *i) - 48;
	*i = *i + 1;
	if (numeric(*(str + *i)))
	{
		while (numeric(*(str + *i + 1)))
		{
			res *= 10;
			res += *(str + *i) - 48;
			*i = *i + 1;
		}
		res *= 10;
		res += *(str + *i) - 48;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	value;

	i = 0;
	while (*(str + i) == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	neg = is_negative(str, &i);
	while (*(str + i) == '0')
		i++;
	if (numeric(*(str + i)))
	{
		value = get_value(str, &i);
		return (neg * value);
	}	
	return (0);
}
