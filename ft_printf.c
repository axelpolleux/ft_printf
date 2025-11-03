/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:27:46 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/03 19:09:03 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	decode_format(int c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_putnbr_u(va_arg(args, int));
	else
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	char	*res;
	va_list	arguments;

	va_start(arguments, format);
	res = (char *)format;
	while (*res)
	{
		if (*res == '%')
		{
			res++;
			decode_format(*res, arguments);
		}
		else
		{
			ft_putchar(*res);
		}
		res++;
	}
	va_end(arguments);
	return (0);
}
