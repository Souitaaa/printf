/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 22:41:23 by csouita           #+#    #+#             */
/*   Updated: 2024/01/03 16:06:01 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		len = len + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		len = len + ft_putnbr(nb / 10);
		len = len + ft_putchar((nb % 10) + 48);
	}
	else
		len = len + ft_putchar(nb + 48);
	return (len);
}
