/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:09:40 by csouita           #+#    #+#             */
/*   Updated: 2024/01/04 09:36:01 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_check(char c, va_list argument)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(argument, int));
	else if (c == 's')
		len += ft_putstr(va_arg(argument, char *));
	else if (c == 'p')
		len += ft_putnbr_px(va_arg(argument, unsigned long),
				"0123456789abcdef", 1);
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(argument, int));
	else if (c == 'u')
		len += ft_positif_number(va_arg(argument, int));
	else if (c == 'x')
		len = ft_putnbr_px(va_arg(argument, unsigned int),
				"0123456789abcdef", 0);
	else if (c == 'X')
		len = ft_putnbr_px(va_arg(argument, unsigned int),
				"0123456789ABCDEF", 0);
	return (len);
}

int	ft_printf(const char *f, ...)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	va_list(argument);
	va_start(argument, f);
	if (!f)
		return (-1);
	while (f[i])
	{
		if (f[i] == '%' && f[i + 1] == '\0')
			return (-1);
		else if (f[i] == '%' && f[i +1] == '%')
			len += ft_putchar(f[i++]);
		else if ((f[i] == '%') && (ft_strchr("cspdiuxX", f[i + 1])))
			len += type_check(f[++i], argument);
		else
			len += ft_putchar(f[i]);
		i++;
	}
	va_end(argument);
	return (len);
}
// int main ()
// {
// 	printf("%c\n",'0');
// 	ft_printf("%c",'0');
// }