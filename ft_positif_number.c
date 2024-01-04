/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_positif_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:31:13 by csouita           #+#    #+#             */
/*   Updated: 2024/01/03 23:48:09 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_positif_number(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len = len + ft_positif_number(n / 10);
		len = len + ft_putchar((n % 10) + 48);
	}
	else
		len = len + ft_putchar(n + 48);
	return (len);
}
