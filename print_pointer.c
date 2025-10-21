/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:38:53 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/21 19:32:35 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(char *p)
{
	int				count;

	if (!p)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	count += ft_putnbr_base((unsigned long)p, "0123456789abcdef", 16);
	return (count);
}
