/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakoudad <oakoudad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:44:45 by oakoudad          #+#    #+#             */
/*   Updated: 2022/08/25 03:46:17 by oakoudad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void	ft_putnbr(int nb, int *d)
{
	long	lg_nb;

	lg_nb = nb;
	if (lg_nb < 0)
	{
		ft_putchar('-', d);
		lg_nb *= -1;
	}
	if (lg_nb < 10)
	{
		ft_putchar('0' + lg_nb, d);
		return ;
	}
	ft_putnbr(lg_nb / 10, d);
	ft_putchar('0' + (lg_nb % 10), d);
}
