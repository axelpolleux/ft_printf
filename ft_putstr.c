/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:54:38 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/03 18:58:43 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <unistd.h>

void	ft_putstr(char *s)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
	}
	// else
	// {
	// 	write(1, "(null)", 6);
	// 	len+= 6;
	// }
}
