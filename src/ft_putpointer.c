/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakoudad <oakoudad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:44:49 by oakoudad          #+#    #+#             */
/*   Updated: 2022/08/25 03:46:51 by oakoudad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void	ft_putpointer(void *p, int *d, int first)
{
	char			*base;
	unsigned long	nb;

	base = "0123456789abcdef";
	if (first == 0)
		ft_putstr("0x", d);
	nb = (unsigned long)p;
	if (nb <= 15)
	{
		ft_putchar(base[nb], d);
		return ;
	}
	ft_putpointer((void *)(nb / 16), d, 1);
	ft_putchar(base[nb % 16], d);
}
