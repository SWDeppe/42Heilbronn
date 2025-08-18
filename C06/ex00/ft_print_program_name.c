/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:41:50 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/14 16:01:54 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int strLen;
	strLen = 0;
	if (argc)
	{
		while (argv[0][strLen] != '\0')
		{
			strLen++;
		}
	} 
	write(1, argv[0], strLen);
	write(1, "\n", 1);
}
