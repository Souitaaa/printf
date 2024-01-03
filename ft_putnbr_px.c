/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_px.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:52:59 by csouita           #+#    #+#             */
/*   Updated: 2024/01/03 22:01:36 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_px(unsigned long n, char *hex, int flag)
{
	int				len;
	unsigned long	hl;

	len = 0;
	hl = ft_strlen(hex);
	if (!n && flag)
		return (ft_putstr("(nil)"));
	if (flag)
		len += ft_putstr("0x");
	if (n >= hl)
		len += ft_putnbr_px(n / hl, hex, 0);
	len += ft_putchar(hex[n%hl]);
	return (len);
}

// int main ()
// {
// 	ft_putnbr_px(285,"0123456789ABCDEF",1);
// }