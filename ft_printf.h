/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:27:19 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/21 18:49:58 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *format, ...);
int		ft_format(char character, va_list args);
int		ft_putchar(char c);
int		ft_putnbr(int c);
int		ft_putstr(char *s);
int		ft_putnbr_base(unsigned long nb, char *base, int len);
int		ft_putptr(char *p);
int		ft_strlen(char *str);

#endif
