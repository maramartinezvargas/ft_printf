/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:39:00 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/20 19:48:11 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int		i;
	char	c;

	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		write(1, &s[i], 1);
		i++;
	}
	return (i + 1);
}

