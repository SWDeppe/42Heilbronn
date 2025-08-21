/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 05:06:37 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/20 14:59:02 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	str_len;

	str_len = 0;
	while (*(str + str_len) != '\0')
		str_len++;
	return (str_len);
}

char	*ft_str_copy(char *str)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(ft_str_len(str) + 1);
	if (copy == NULL && ft_str_len(str) <= 0)
		return ("\0");
	while (i < ft_str_len(str))
	{
		*(copy + i) = *(str + i);
		i++;
	}
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	stock_str = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (stock_str == NULL && ac <= 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_str_copy(av[i]);
		stock_str[i].size = ft_str_len(av[i]);
		i++;
	}
	stock_str[i + 1].str = 0;
	return (stock_str);
}
