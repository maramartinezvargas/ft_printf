/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:39:09 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/21 19:58:40 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char character, va_list args)
{
	if (character == '%')
		return (ft_putchar('%'));
	if (character == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (character == 'd' || character == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (character == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (character == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789", 10));
	if (character == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789abcdef", 16));
	if (character == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789ABCDEF", 16));
	if (character == 'p')
		return (ft_putptr(va_arg(args, char *)));
	return (0);
}
