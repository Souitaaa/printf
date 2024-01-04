/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_px.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:52:59 by csouita           #+#    #+#             */
/*   Updated: 2024/01/03 23:49:43 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_px(unsigned long nbr, char *base, int i)
{
	int				len;
	unsigned long	bs;

	len = 0;
	if (i && !nbr)
		return (ft_putstr("(nil)"));
	if (i)
		len += ft_putstr("0x");
	bs = ft_strlen(base);
	if (nbr >= bs)
		len += ft_putnbr_px(nbr / bs, base, 0);
	len += ft_putchar(base[nbr % bs]);
	return (len);
}

// int main ()
// {
// 	ft_putnbr_px(285,"0123456789ABCDEF",1);
// }