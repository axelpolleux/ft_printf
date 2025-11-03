/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:27:46 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/03 09:03:27 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void decode_format(int c, int *len)
{
	if (c == 'c')
	else if (c == 's')
	else if (c == 'p')
	else if (c == 'd')
	else if (c == 'i')
	else if (c == 'u')
	else if (c == 'x')
	else if (c == 'X')
	else if (c == '%')

}

int	ft_printf(const char *format, ...)
{
	char	*res;

	va_list	arguments;
	va_start(arguments, format);
	res = (char *)format;
	while (*res)
	{
		decode_format(&len,)

		res++;
	}
	return (0);
}
