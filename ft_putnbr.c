/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:54:53 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/04 15:01:12 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		ft_putchar('-', 1);
		len++;
		if (n == -2147483648)
		{
			write(1, "2147483648", 10);
		}
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr((n / 10));
		len++;
	}
	ft_putchar((n % 10 + '0'), 1);
}

void	ft_putnbr_u(int nbr)
{
	int				len;
	unsigned int	n = (unsigned int)nbr;

	len = 0;
	if (n >= 10)
	{
		ft_putnbr((n / 10));
		len++;
	}
	ft_putchar((n % 10 + '0'), 1);
}

void	putbase(int n)
{
	while ()
}