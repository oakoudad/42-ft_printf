/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakoudad <oakoudad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:41:10 by oakoudad          #+#    #+#             */
/*   Updated: 2022/08/26 22:07:49 by oakoudad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	conversion(char c, va_list args, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'p')
		ft_putpointer(va_arg(args, void *), len, 0);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_putunint(va_arg(args, unsigned int), len);
	else if (c == 'x' || c == 'X')
		ft_putbase(va_arg(args, unsigned int), c, len);
	else if (c == '%')
		ft_putchar('%', len);
	else
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			ft_putchar(format[0], &len);
		else
		{
			format++;
			if (conversion(*format, args, &len))
				continue ;
		}
		format++;
	}
	va_end(args);
	return (len);
}
