/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:39:09 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/20 19:43:22 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char character, va_list args)
{
	if (character == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (character == 's')
		return (ft_putnbr(va_arg(args, int)));
	if (character == 'd' || character == 'i')
		return (ft_putnbr(va_arg(args, int)));
	return (0);
}
