/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeppe <sdeppe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:15:59 by sdeppe            #+#    #+#             */
/*   Updated: 2025/08/18 15:22:59 by sdeppe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define  TRUE		1
# define  FALSE		0
# define  SUCCESS	0
# define  EVEN_MSG	"I have an even number of arguments.\n"
# define  ODD_MSG	"I have an odd number of arguments.\n"
# define  EVEN(x) ( ((x) % 2) == 1 )

typedef int	t_bool;

#endif