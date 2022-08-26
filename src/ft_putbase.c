/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakoudad <oakoudad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:44:42 by oakoudad          #+#    #+#             */
/*   Updated: 2022/08/25 03:46:11 by oakoudad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void	ft_putbase(unsigned int nb, char c, int *d)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (c == 'x')
		base = "0123456789abcdef";
	if (nb <= 15)
	{
		ft_putchar(base[nb], d);
		return ;
	}
	ft_putbase(nb / 16, c, d);
	ft_putchar(base[nb % 16], d);
}
