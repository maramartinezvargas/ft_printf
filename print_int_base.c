/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:38:57 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/21 18:04:33 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	c;
	int		count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putnbr_base(unsigned int nb, char *base, int len)
{
	int	count;

	count = 0;
	if (nb > (unsigned long)len)
	{
		count += ft_putnbr_base(nb / len, base, len);
	}
	count += write(1, &base[nb % len], 1);
	return (count);
}
