/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakoudad <oakoudad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:44:52 by oakoudad          #+#    #+#             */
/*   Updated: 2022/08/26 22:08:02 by oakoudad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void	ft_putstr(char *str, int *d)
{
	if (!str)
	{
		ft_putstr("(null)", d);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, d);
		str++;
	}
}
