/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakoudad <oakoudad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:42:37 by oakoudad          #+#    #+#             */
/*   Updated: 2022/08/25 03:42:38 by oakoudad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *d);
void	ft_putbase(unsigned int nb, char c, int *d);
void	ft_putpointer(void *p, int *d, int first);
void	ft_putunint(unsigned int nb, int *d);
void	ft_putnbr(int nb, int *d);
void	ft_putstr(char *str, int *d);
int		ft_printf(const char *format, ...);

#endif