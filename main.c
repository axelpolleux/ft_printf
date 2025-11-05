/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 09:43:03 by apolleux          #+#    #+#             */
/*   Updated: 2025/11/04 18:47:11 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	const char *base = "Test of printf %c %s %d %i %u %x %X %%\n";
	int len1, len2;

	int	test = 2147483647;
	len1 = printf(base, 'z', "string", test, test, test, test, test);
	len2 = ft_printf(base, 'z', "string", test, test, test, test, test);

	printf("Real : %d || Mine : %d\n", len1, len2);
}
